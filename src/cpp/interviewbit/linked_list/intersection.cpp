#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node *next;
};
node *h1=NULL;
node *h2=NULL;
node *h3=NULL;

void insert(int value)
{
    node *temp=new node();
    temp->data=value;
    temp->next=h1;
    h1=temp;
}
void insert2(int value)
{
    node *temp = new node();
    temp->data = value;
    temp->next = h2;
    h2 = temp;
}
void insert3(int value)
{
    node *temp = new node();
    temp->data = value;
    temp->next = NULL;
    
    node *trav = h3;
    if(h3 == NULL)
    {
        h3 = temp;
    }
    else 
    {
        while(trav->next != NULL)
        {
            trav = trav->next;
        }

        trav->next = temp;
    }
}
void intersection()
{
    node *a=h1;
    node *b=h2;

    while(a!=NULL && b!=NULL)
    {
        if(a->data == b->data)
        {
           // cout<<"Inserted "<<a->data<<"\n";
            insert3(a->data);
            a = a->next;
            b = b->next;
        }
        else if(a->data < b->data)
        {
            a=a->next;
        }
        else if(a->data > b->data)
        {
            b=b->next;
        }
    }   
}


int main()
{

    insert(9);
    insert(7);
    insert(5);
    insert(3);
    insert(2);

    /* node* x = h1;
    while(x!=NULL)
    {
        cout<<x->data<<"\n";
        x=x->next;
    } */

    insert2(8);
    insert2(7);
    insert2(3);
    cout<<"\n";

  /*   node *y=h2;
    while(y!=NULL)
    {
        cout<<y->data<<"\n";
        y=y->next;
    } */
    
    intersection();
    cout<<"\n";
    node *z=h3;
    while(z!=NULL)
    {
        cout<<z->data<<"\n";
        z=z->next;
    }

    return 0;

}