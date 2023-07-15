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

void insertAtHead(Node*& head,int value){
        Node *newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
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
    //Node *a = new Node(10);
    //Node *b = new Node(20);
    //Node *c = new Node(30);

    //a->next = b;
    //a->next = c;

    //cout << a->value<<" "<<a->next->value<<" "<<b->next->value<<endl;

    Node * head = NULL;
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    insertAtHead(head,60);
    cout<<head->value<<" "<<head->next->value<<endl;
    display(head);

}
