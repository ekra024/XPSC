#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
};
class Linked_list{
public:
    node * head;
    Linked_list()
    {
        head = NULL;
    }

    node * createnewnode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        node *a = createnewnode(value);
        if(head == NULL){
            head = a;
            return;
        }

        a->next = head;
        head = a;
    }
    void PrintOflist()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<endl;
    }
};

int main()
{
    Linked_list l;
    l.InsertAtHead(5);
    l.InsertAtHead(4);
    l.InsertAtHead(3);
    l.InsertAtHead(2);
    l.InsertAtHead(1);
    l.PrintOflist();
    l.InsertAtHead(0);
    l.PrintOflist();


}
