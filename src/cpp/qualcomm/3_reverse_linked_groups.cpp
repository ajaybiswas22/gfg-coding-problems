#include<bits/stdc++.h>
using namespace std;

struct Node {

    int data;
    Node* next;
}*head = NULL;

void insert(int datas)
{
    Node* a = new Node();
    a->data = datas;
    a->next = head;
    
    // update head
    head = a;
}

Node* revGroups(Node* start, int k)
{
    int count = k;
    Node *p =NULL, *c=start, *n=NULL;

    while(c!=NULL && count--)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }

    if (n != NULL)
        start->next = revGroups(n, k);

    return p;
}

int getsize()
{
    Node* temp = head;

    int count = 0;
    while(temp!= NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}


int main()
{

    insert(8);
    insert(7);
    insert(6);
    insert(5);
    insert(4);
    insert(2);
    insert(2);
    insert(1);

    head = revGroups(head,4);

    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    return 0;
}