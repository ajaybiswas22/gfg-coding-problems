#include<bits/stdc++.h>
using namespace std;

class listnode {
     public:
     int val;
     listnode *next;
 };

listnode* head=nullptr;

listnode* reverseList(listnode* head)
{
    if (head == NULL || head->next == NULL) 
        return head;
    listnode* p = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return p;
}

void insert_beg(int data)
{
    listnode* temp = new listnode;
    temp->val = data;
    temp->next = head;
    head = temp;
}

void display()
{
    listnode* trav = head;
    while(trav!= nullptr)
    {
        cout<<trav->val<<" ";
        trav = trav->next;
    }
    cout<<"\n";
}
int main()
{
	for(int i=0;i<10;i++)
    {
        insert_beg(i);
    }

    display();

    head = reverseList(head);
    display();
}