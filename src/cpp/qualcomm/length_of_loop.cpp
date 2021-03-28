#include<iostream>

using namespace std;

struct Node {

    int data;
    Node* next;
}*head = NULL;

void makeCycle(int start) 
{
   int count = 1;
   Node *temp = head;
   
   while(temp != NULL && count < start) {
       temp = temp->next;
       count++;
   } 

   Node* loopStart = temp;

   while(temp->next != NULL) {
       temp = temp->next;
   }

   temp->next = loopStart;

}

int loopLength(int start) {

   int count = 1;
   Node *temp = head;
   
   while(temp != NULL && count < start) {
       temp = temp->next;
       count++;
   } 

   Node* loopStart = temp;
   int length = 1;
   while(temp->next != loopStart && temp->next != NULL) {
       temp = temp->next;
       length++;

       // length is zero if no loop
       if(temp == NULL)
       {
           length = 0;
       }
   }

    return length;
}

void insert(int datas)
{
    
    Node* temp = head;

    Node* a = new Node();
    a->data = datas;
    a->next = head;
    
    // update head
    head = a;

}

int main() {

insert(5);
insert(10);
insert(15);
insert(20);
insert(25);

makeCycle(3);

Node* temp = head;
for(int i=0; i<6; i++)
{
    cout<<temp->data<<" ";
    temp = temp->next;
}

cout<<endl<<loopLength(3)<<endl;

}