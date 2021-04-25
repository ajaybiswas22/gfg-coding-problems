#include<iostream>
#include<cmath>
using namespace std;

class node {
public:
    int data;
    node* next;
};

node *h1 = NULL, *h2  = NULL, *h3 = NULL;

void insertBeg(int lno, int value) {

    node* temp = new node();
    temp->data = value;
    
    if(lno == 1){
        temp->next = h1;
        h1 = temp;
    }
    else if(lno == 2){
        temp->next = h2;
        h2 = temp;
    }
    else{
        temp->next = h3;
        h3 = temp;
    }
    
}

void insertEnd(int lno, int value) {
    
    node* temp = new node();
    node* head;
    temp->data = value;
    temp->next = NULL;

    if(lno == 1){
        head = h1;
    }
    else if(lno == 2){
        head = h2;
    }
    else{
        head = h3;
    }

    if(head == NULL)
    {
        if(lno == 1){
            h1 = temp;
        }
        else if(lno == 2){
            h2 = temp;
        }
        else{
            h3 = temp;
        }
    }
    else
    {
        node* trav = head;
        while(trav->next != NULL)
        {
            trav = trav->next;
        }
        trav->next = temp;
    }
}

void display(node *head) {
    node* trav = head;
    while(trav!=NULL) {
        cout<<trav->data<<"\n";
        trav = trav->next;
    }
}

int sumList(node* h1, node* h2) {

    if(h1 == NULL)
    {
        return 0;
    }
    
    int sum = sumList(h1->next,h2->next);
    sum = sum + h1->data + h2->data;

    if(sum > 9)
    {
        insertBeg(3,sum - 10);
        return 1;
    }
    else
    {
        insertBeg(3,sum);
        return 0;
    }

}

void checkList()
{
    node* temp1 = h1;
    node* temp2 = h2;
    int count1 = 0, count2 = 0;

    while(temp1!= NULL)
    {
        count1++;
        temp1 = temp1->next;
    }
    while(temp2!= NULL)
    {
        count2++;
        temp2 = temp2->next;
    }

    int diff = abs(count1-count2);
    if(count1>count2)
    {
        while(diff--)
        {
            insertBeg(2,0);
        }
    }
    else if(count2>count1)
    {
        while(diff--)
        {
            insertBeg(1,0);
        }
    }
}

int main()
{
    insertEnd(1,1);
    insertEnd(1,2);
    insertEnd(1,3);
    insertEnd(1,4);
    insertEnd(1,5);

    insertEnd(2,9);
    insertEnd(2,2);
    insertEnd(2,3);
    insertEnd(2,4);

    checkList();

    if(sumList(h1,h2) == 1)
    {
        insertBeg(3,1);
    }

    display(h3);

    return 0;
}