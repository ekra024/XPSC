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
    int sz;
    LinkedList()
    {
        head = NULL;
        sz=0;
    }

    node * CreateNewNode(int value)
    {
        sz++;
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
        return sz;
    }
    void InsertAtAnyIndex(int index, int value)
    {
        if(index<0 || index>sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(value);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!=index-1)
        {
            a = a->next;
            cur_index++;
        }
        node *newnode = CreateNewNode(value);
        newnode->next = a->next;
        a->next = newnode;
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
    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        node *a = head;
        head = a->next;
        delete a;
    }
    void DeletAnyIndex(int index)
    {
        if(index<0 || index>sz-1)
        {
            return;
        }
        if(index==0)
        {
            DeleteAtHead();
            return;
        }
        sz--;
        node *a = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->next;
            cur_index++;
        }
        node *b = a->next;
        a->next = b->next;
        delete b;
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
    l.Traverse();
    l.InsertAtAnyIndex(1,100);
    l.Traverse();
    l.InsertAtAnyIndex(4,200);
    l.Traverse();
    l.DeleteAtHead();
    cout<<l.getSize()<<endl;
    l.Traverse();
//    cout<<"10    is found " <<l.SearchDistictValue(10)<<endl;
//
//
//    cout<<"5 is found at "<<l.SearchDistictValue(5)<<endl;
//    cout<<"30 is found at "<<l.SearchDistictValue(30)<<endl;
//
//    l.SearchAllValue(30);
}

