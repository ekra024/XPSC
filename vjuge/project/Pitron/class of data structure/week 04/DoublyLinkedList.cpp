#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node * next;
    node * pre;
};

class Doubly_Linked_List{
public:
    node * head;
    int sz;
    Doubly_Linked_List()
    {
        head = NULL;
        sz=0;
    }
    node *CreateANode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        newnode->pre = NULL;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        node * newnode = CreateANode(value);
        sz++;
        if(head==NULL)
        {
            head = newnode;
            return;
        }
        node * a= head;
        newnode->next = a;
        newnode->pre = newnode;
        head = newnode;
    }
    void Delete()
    {

    }
    void Tranverse()
    {
        node * a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a =a->next;
        }
        cout<<endl;
    }

};
int main()
{
    Doubly_Linked_List d;
    d.InsertAtHead(5);
    d.InsertAtHead(4);
    d.InsertAtHead(3);
    d.InsertAtHead(2);
    d.InsertAtHead(1);
    d.InsertAtHead(0);
    d.Tranverse();
}
