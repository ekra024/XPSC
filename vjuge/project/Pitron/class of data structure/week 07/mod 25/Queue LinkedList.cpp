#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node * nxt;
};
class LinkedList{
public:
    Node * head;
    Node * tail;
    int sz = 0;
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    Node * CreateNode(int val)
    {
        Node * newNode = new Node;
        newNode->data = val;
        newNode->nxt = NULL;
        return newNode;
    }
    void InsertAtTail(int val)
    {
        sz++;
        Node * newNode = CreateNode(val);
        if(head == NULL)
        {
            head = tail = newNode;
            return;
        }
        tail->nxt = newNode;
        tail = newNode;
    }
    void DeleteAtHead()
    {
        if(head == NULL)
        {
            cout<<"NO element\n";
            return;
        }
        sz--;
        Node *a = head;
        head = a->nxt;
        delete a;
    }
    int Size()
    {
        return sz;
    }
    int SFront()
    {
        if(head == NULL)
        {
            return -1;
        }

        return head->data;
    }
};
class Queue{
public:
    LinkedList l;

    void Enqueue(int val)
    {
        l.InsertAtTail(val);
    }
    void Dequeue()
    {
        l.DeleteAtHead();
    }
    int Front()
    {
        return l.SFront();
    }
    int QSize()
    {
        return l.Size();
    }

};

int main()
{
    Queue st;
    st.Enqueue(5);
    st.Enqueue(10);
    st.Enqueue(15);
    cout<<st.QSize()<<"\n";
    cout<<st.Front()<<"\n";
    st.Dequeue();
    cout<<st.Front()<<"\n";
    st.Dequeue();
    cout<<st.Front()<<"\n";
    st.Dequeue();
    cout<<st.Front()<<"\n";

    cout<<st.QSize()<<"\n";
}
