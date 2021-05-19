#include<iostream>
#include<vector>
#include<cstdlib>
#include<stdio.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
};
node* head = NULL;

void insert_beg(int value)
{
    node* temp = new node();
    temp->data = value;
    temp->next = head;
    head = temp;
}


void display()
{
    node* temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
    printf("%d",1);
}

void  insertBetween(node* a, node* b, int mid)
{
    node* temp = new node();
    temp->data = mid;

    if(a == NULL)
    {
        // beginning
        temp->next = b;
        head = temp;
    }
    else if(b == NULL){}
    else
    {
        // middle
        temp->next = a->next;
        a->next = temp;
    }

}

void deleteBetween(node *a, node* target)
{
    if(a == NULL){}
    else if(target->next == NULL)
    {
        // delete end
        a->next = NULL;
        free(target);
    }
    else
    {
        // delete middle
        a->next = target->next;
        free(target);
    }
}
void insertion_sort()
{
    node* j = head->next;
    node* old_j = head;

    while(j!=NULL)
    {
        node* old_i = NULL;
        node* i = head;

        while(i!=j)
        {
            if(i->data > j->data)
            {
                // insert at position  
                // old_i -- insert here -- i
                insertBetween(old_i,i,j->data);
                // delete target old_j -- target (j) -- target->next
                deleteBetween(old_j,j);
                j = old_j;
                break;
            }

            old_i = i;    // holding the previous node
            i = i->next;
        }

        cout<<"PASS\n";
        display();

        old_j = j;

        if(j!= NULL)
        {
            j=j->next;
        }
    }


}

int main()
{

    insert_beg(10);
    insert_beg(50);
    insert_beg(20);
    insert_beg(30);
    insert_beg(12);
    insert_beg(90);

    cout<<"BEFORE\n";
    display();

    insertion_sort();

    cout<<"\nAFTER\n";
    display();
    return 0;
}