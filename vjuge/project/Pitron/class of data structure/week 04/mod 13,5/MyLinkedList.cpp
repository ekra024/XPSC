#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node * next;
};
class MyLinkedList
{
public:
    node * head;
    MyLinkedList()
    {
        head = NULL;
    }
    node * Createanewnode(int value)
    {
        node * newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        node *a = Createanewnode(value);
        if(a == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }
    void PrintList()
    {
       node *a = head;
       while(a!=NULL)
       {
           cout<<a->data<<" ";
           a = a->next;
       }
       cout<<endl;
    }
//    void SortList()
//    {
//
//    }

};
int main()
{
    MyLinkedList l;
    l.InsertAtHead(4);
    l.InsertAtHead(2);
    l.InsertAtHead(5);
    l.InsertAtHead(1);
    l.InsertAtHead(3);
    l.PrintList();
}
