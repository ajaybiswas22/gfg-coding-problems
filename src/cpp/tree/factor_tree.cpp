#include<bits/stdc++.h>
using namespace std;
class Node;
Node* createNode(int n);
void construct(Node* &node, int n);
void levelOrder(Node* node);

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int n)
{
    Node* node = new Node();
    node->data = n;
    node->left = nullptr;
    node->right = nullptr;
    //std::cout<<node->data<<" ";
    return node;
}

void construct(Node* &node, int n)
{
    if(node == nullptr)
    {
        node = createNode(n);
    }
    if(n==1)
    {
       node = createNode(n); 
       return;    
    }
    for(int i=2;i<=n;i++)
    {
        if(n%i == 0)
        {
            node->left = createNode(i);
            construct(node->right,n/i);
            break;
        }
    }
}

void levelOrder(Node* root)
{
    // Base Case
    if (root == NULL)  return;
 
    // Create an empty queue for level order traversal
    queue<Node *> q;
 
    // Enqueue Root and initialize height
    q.push(root);
 
    while (q.empty() == false)
    {
        // Print front of queue and remove it from queue
        Node *node = q.front();
        cout << node->data << " ";
        q.pop();
 
        /* Enqueue left child */
        if (node->left != NULL)
            q.push(node->left);
 
        /*Enqueue right child */
        if (node->right != NULL)
            q.push(node->right);
    }
}

int main()
{
    Node* root = nullptr;
    construct(root,48);
    levelOrder(root);
}