#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
};
node *root = nullptr;
void insert(int val)
{
    node *temp=new node();
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;

    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        node *ptr=root;
        while(ptr!=NULL)
        {
            if(temp->data < ptr->data)
            {
                if(ptr->left == NULL)
                {
                    ptr->left=temp;
                    break;
                }
                else
                {
                    ptr=ptr->left;
                }
            }
            else
            {
                if(ptr->right == NULL)
                {
                    ptr->right=temp;
                    break;
                }
                else
                {
                    ptr=ptr->right;
                }
            }
        }
    }
}
void preorder(node *ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    cout<<ptr->data<<"\n";
    preorder(ptr->left);
    preorder(ptr->right);
}
int main()
{

    insert(10);
    insert(20);
    insert(30);
    preorder(root);

}