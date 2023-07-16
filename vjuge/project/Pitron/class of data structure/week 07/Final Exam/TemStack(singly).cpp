#include<bits/stdc++.h>
using namespace std;

template<class T>
class Node{
public:
    T data;
    Node * next;
};
template<class T>
class Stack{
public:
    Node<T> * head;
    int sz;
    Stack()
    {
        head = NULL;
        sz = 0;
    }
    Node<T> * CreateNewNode(T val)
    {
        Node<T> * newnode = new Node<T>;
        newnode->data = val;
        newnode->next = NULL;
        return newnode;
    }
    void Push(T val)
    {
        sz++;
        Node<T> *a = CreateNewNode(val);
        if(head == NULL){
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }
    void Pop()
    {
        if(head == NULL)
        {
            cout<<"Stack is empty\n";
        }
        Node<T> *a = head;
        head = a->next;
        delete a;
        sz--;
    }
    T Front()
    {
        if(head == NULL)
        {
            T a;
            return a;
        }
        return head->data;
    }
};

int main()
{
    Stack<int>st;
    st.Push(10);
    st.Push(20);
    st.Push(30);
    cout<<st.Front()<<"\n";
    st.Pop();
    cout<<st.Front()<<"\n";
    st.Pop();
    cout<<st.Front()<<"\n";
    st.Pop();
    cout<<st.Front()<<"\n";
}
