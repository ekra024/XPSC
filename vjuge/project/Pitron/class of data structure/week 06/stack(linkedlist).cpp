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

    void DeleteAtHead()
    {
       if(head == NULL)return;
       node *a = head;
       node *b = head->next;
       delete a;
       if(b!=NULL){
        b->pre = NULL;
       }
        head = b;
        sz--;
    }
    int getSize()
    {
        return sz;
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
class Stack{
public:
    DoublyLinkedList dl;

    Stack()
    {

    }
    int top()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return dl.head->data;
    }
    void push(int val)
    {
        dl.InsertAtHead(val);
    }
    void pop()
    {
        if(dl.getSize()==0){
            cout<<"Stack is empty"<<endl;
        }
        dl.DeleteAtHead();
    }


};
int main()
{
    Stack st;
    st.push(3);
    cout<<st.top()<<endl;
    st.push(4);
    cout<<st.top()<<endl;
    st.push(5);
    cout<<st.top()<<endl;
   // st.push(6);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

}
