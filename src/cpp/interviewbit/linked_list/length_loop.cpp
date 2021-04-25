
//Floyd’s Cycle-Finding Algorithm

#include<iostream>
#include<vector>
using namespace std;
class node
{
    public:
        int data;
        node* next;
};
void printll(node *h)
{
    while(h!=NULL)
    {
        cout<<h->data<<" ";
        h=h->next;
    }
}
void isloop(node *head)
{
    int count=1;
    node *a=head; //one step
    node *b=head; //two step
    while(a!=NULL || b!=NULL)
    {
        
        a=a->next;
        b=b->next->next;

        if(a==b)
        {
            cout<<"loop detected at "<<a->data<<"\n";
            //cout<<a->data;
            while(a->next!=b)
            {
                count++;
                a=a->next;
            }
            cout<<count<<"\n";
            break;
        }

        
    }
    if(a==NULL || b==NULL)
    {
        cout<<"No loop\n";
    }
}
int main()
{
    
    node *first=NULL;
    node *second=NULL;
    node *third=NULL;
    node *fourth=NULL;
    node *fifth=NULL;
    
    first=new node();
    second=new node();
    third=new node();
    fourth=new node();
    fifth=new node();

    first->data=1;
    first->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=fifth;
    
    fifth->data=5;
    fifth->next=second;

    /* Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
 
    /* Create a loop for testing(5 is pointing to 3)
    head->next->next->next->next->next = head->next->next; */

    
    node *head=first;
    //printll(first);
    isloop(head);

    return 0;


}