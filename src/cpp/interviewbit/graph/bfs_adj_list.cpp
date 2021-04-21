#include<iostream>
#include<list>
using namespace std;

class node {

public:
    int data;
    node* next;
};

class Adjacency {

    node *box[100];
    int size;
public:
    Adjacency(int x)
    {
        for(int i=0;i<x;i++)
        {
            box[i] = new node();
            box[i]->data = -9999;
            box[i]->next = NULL;
        }
        size = x;
    }

    void print() {

        for(int i=0;i<size;i++)
        {
            cout<<box[i]->data<<" ";
            node* temp = box[i]->next;
            while(temp!=NULL) {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;

        }
    }

    void insert(int pos,int val) {
        if(box[pos]->data != -9999) {

            node* temp;
            temp = box[pos];

            node* newNode = new node();
            newNode->data = val;
            newNode->next = NULL;
            while(temp->next!=NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        else
        {
            box[pos]->data = val;
            box[pos]->next = NULL;
        }
    }

    void BFS(int s)
    {
        // Mark all the vertices as not visited
        bool *visited = new bool[size];
        for(int i = 0; i < size; i++)
            visited[i] = false;
    
        // Create a queue for BFS
        list<int> queue;
    
        // Mark the current node as visited and enqueue it
        visited[s] = true;
        queue.push_back(s);
    
        // 'i' will be used to get all adjacent
        // vertices of a vertex
    
        while(!queue.empty())
        {
            // Dequeue a vertex from queue and print it
            s = queue.front();
            cout << s << " ";
            queue.pop_front();
    
            // Get all adjacent vertices of the dequeued
            // vertex s. If a adjacent has not been visited,
            // then mark it visited and enqueue it
            node* i = box[s];

            while(i != NULL)
            {
                if (!visited[i->data])
                {
                    visited[i->data] = true;
                    queue.push_back(i->data);
                }
                i = i->next;

            }
        }
    }
};

int main()
{
    Adjacency g(4);

    g.insert(0, 1);
    g.insert(0, 2);
    g.insert(1, 2);
    g.insert(2, 0);
    g.insert(2, 3);
    g.insert(3, 3);

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);

}

