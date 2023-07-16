#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;
    node * pre;
};

class DoublyLinkedList{
public:
    node * head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->next = NULL;
        newnode->pre = NULL;
        return newnode;
    }
    void InsertAtHead(int data)
    {
        sz++;
      node * newnode = CreateNewNode(data);
      if(head == NULL)
      {
          head = newnode;
          return;
      }
      node *a = head;
      newnode->next = a;
      a->pre = newnode;
      head = newnode;
    }

    void Insert(int index,int data)
    {
        if(index>sz)return;
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!=index-1)
        {
            a = a->next;
            cur_index++;
        }
        node * newnode = CreateNewNode(data);
        newnode->next = a->next;
        newnode->pre = a;
        node *b = a->next;
        b->pre = newnode;
        a->next = newnode;
        sz++;
    }

    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index<<"doesn't exits "<<endl;
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index !=index)
        {
            a = a->next;
            cur_index++;
        }
        node *b = a->pre;
        node *c = a->next;
        if(b!=NULL){
            b->next = c;
        }
        if(c!=NULL){
            c->pre = b;
        }
        delete a;
        if(index==0){
            head = NULL;
        }
        sz--;
    }
    int getSize()
    {
        return sz;
    }

    void Reverse()
    {
        if(head == NULL)return;
        node *a = head;
        int cur_index = 0;
        while(cur_index != sz-1)
        {
            a = a->next;
            cur_index++;
        }
        node *b = head;
        while(b!=NULL)
        {
            swap(b->next,b->pre);
            b = b->pre;
        }
        head = a;
    }

    void Traverse()
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
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(5);
    dl.InsertAtHead(1);
    dl.InsertAtHead(20);
    dl.Traverse();
    //dl.InsertAtHead(10);
     dl.Traverse();
     dl.Reverse();
     dl.Traverse();

}
