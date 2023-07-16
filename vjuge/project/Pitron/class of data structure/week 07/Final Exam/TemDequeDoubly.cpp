#include<bits/stdc++.h>
using namespace std;

template<class T>
class Node{
public:
    T data;
    Node<T> * next;
    Node<T> * pre;
};

template<class T>
class Deque{
public:
    Node<T> * head;
    Node<T> * tail;
    int sz;
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    Node<T> * CreateANode(T val)
    {
        Node<T> * newnode = new Node<T>;
        newnode->data = val;
        newnode->next = NULL;
        newnode->pre = NULL;
        return newnode;
    }
    void Push_Front(T val)
    {
        sz++;
        Node<T> *a = CreateANode(val);
        if(head == NULL)
        {
            head = a;
            tail = a;
            return;
        }
        Node<T> * b = head;
        head = a;
        a->next = b;
        b->pre = a;
    }
    void Push_Back(int val)
    {
        sz++;
        Node<T> *a = CreateANode(val);
        if(tail == NULL)
        {
            head = a;
            tail = a;
            return;
        }
        a->pre = tail;
        tail->next = a;
        tail = a;
    }
    void Pop_back()
    {
        if(head==NULL)
        {
            return;
        }
        Node<T> *a=tail;
        tail = tail->pre;
        tail->next = NULL;
        delete a;
        sz--;
    }
    void Pop_front()
    {
        if(head == NULL)
        {
            return;
        }
        Node<T> *a=head;
        head = head->next;
        head->pre = NULL;
        delete a;
        sz--;
    }
    T Front()
    {
        if(head==NULL)
        {
            T a;
            return a;
        }
        return head->data;
    }
    T Back()
    {
        if(tail == NULL)
        {
            T a;
            return a;
        }
        return tail->data;
    }

};

int main()
{
    Deque<int>dq;
    dq.Push_Back(10);
    dq.Push_Back(20);
    dq.Push_Back(30);
    dq.Push_Front(40);
    dq.Push_Front(50);
    dq.Push_Front(60);
    cout<<dq.Front()<<"\n";
    cout<<dq.Back()<<"\n";
    dq.Pop_back();
    dq.Pop_front();
    cout<<dq.Front()<<"\n";
    cout<<dq.Back()<<"\n";
    dq.Pop_back();
    dq.Pop_front();
    cout<<dq.Front()<<"\n";
    cout<<dq.Back()<<"\n";
}
