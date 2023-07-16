#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node * next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }

};

void insertAtTail(Node *& head ,int value)
{
    Node *newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *a = head;
    while(a->next!=NULL)
    {
        a = a->next;
    }
    a->next=newNode;
}
void display(Node*& head)
{
    while(head!=NULL)
    {
        cout<<head->value<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    Node * head = NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);


    //cout<<head->value<<" "<<head->next->value<<endl;
    display(head);

}
