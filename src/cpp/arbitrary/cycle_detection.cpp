#include<iostream>
class Node
{
    public:
    char data;
    Node* next = nullptr;
};
Node* head = nullptr;

Node* newNode(char value)
{
    Node* temp = new Node();
    temp->data = value;
    temp->next = nullptr;
    return temp;
}

void detectCycle()
{
    Node* tortoise = head;
    Node* hare = head;

    do
    {
        hare = hare->next->next;
        tortoise = tortoise->next;
    }while(hare!=tortoise);

    std::cout<<"Cycle detected at "<<tortoise->data<<std::endl;
}

int main()
{
    Node* A = newNode('A');
    Node* B = newNode('B');
    Node* C = newNode('C');
    Node* D = newNode('D');
    Node* E = newNode('E');

    A->next = B;
    B->next = C;
    C->next = D;
    D->next = E;
    E->next = C;

    head = A;

    detectCycle();
}