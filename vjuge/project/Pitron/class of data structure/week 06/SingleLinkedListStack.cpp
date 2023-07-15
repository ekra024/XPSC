#include<bits/stdc++.h>
using namespace std;

template<class T>
class node{
public:
    T data;
    node *next;
};

template <class T>
class LinkedList{
public:
    node<T> * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz=0;
    }

    node<T> * CreateNewNode(T value)
    {
        sz++;
        node<T> *newnode = new node<T>;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
    void InsertAtHead(T value)
    {
        node<T> *a = CreateNewNode(value);
        if(head == NULL){
            head = a;
            return;
        }

        a->next = head;
        head = a;
    }

    int getSize()
    {
        return sz;
    }

    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        node<T> *a = head;
        head = a->next;
        delete a;
    }

};

template<class T>
class Stack{
public:
    LinkedList<T> l;
    Stack(){
    }
    T top()
    {
        if(l.getSize()==0)
        {
            cout<<"Stack is empty"<<endl;
            T a;
            return a;
        }
        return l.head->data;
    }
    void push(T val)
    {
        l.InsertAtHead(val);
    }
    void pop()
    {
        if(l.getSize()==0){
            cout<<"Stack is empty"<<endl;
            return;
        }
        l.DeleteAtHead();
    }
};
int main()
{
    Stack<char> st1;
    st1.push('a');
    cout<<st1.top()<<endl;
    st1.pop();
    cout<<st1.top()<<endl;
    Stack<int> st2;
    st2.push(4);
    cout<<st2.top()<<endl;
}


