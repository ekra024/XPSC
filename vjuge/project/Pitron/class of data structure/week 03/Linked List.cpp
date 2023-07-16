#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;
};

class LinkedList{
public:
    node * head;
    LinkedList()
    {
        head = NULL;
    }

    node * CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if(head == NULL){
            head = a;
            return;
        }

        a->next = head;
        head = a;
    }
    void Traverse()
    {
        node* a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<endl;
    }
    int SearchDistictValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!=NULL)
        {
            if(a->data == value){
                return index;
            }
            a = a->next;
            index++;
        }
        return -1;
    }
    int getSize()
    {
        int sz = 0;
        node *a = head;
        while(a!=NULL)
        {
            sz++;
            a = a->next;
        }
        return sz;
    }
    void SearchAllValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!=NULL)
        {
            if(a->data == value){
               cout<<value<<" is found at index "<<index<<endl;
            }
            a = a->next;
            index++;
        }
    }

};
int main()
{
    LinkedList l;

    l.InsertAtHead(10);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    cout<<l.getSize()<<endl;
    cout<<"10    is found " <<l.SearchDistictValue(10)<<endl;


    cout<<"5 is found at "<<l.SearchDistictValue(5)<<endl;
    cout<<"30 is found at "<<l.SearchDistictValue(30)<<endl;

    l.SearchAllValue(30);
}
