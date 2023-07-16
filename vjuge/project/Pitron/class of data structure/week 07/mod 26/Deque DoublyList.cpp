#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node * pre;
    node * nxt;
};

class Deque{
public:
    node * head;
    node * tail;
    int sz;

    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node * CreateNewNode(int val)
    {
        node *newnode = new node;
        newnode->data = val;
        newnode->pre = NULL;
        newnode->nxt = NULL;
        return newnode;
    }

    void Push_back(int val)
    {
        node* newnode = CreateNewNode(val);
        if(sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->pre = tail;
        tail = newnode;
        sz++;
    }
    void Push_front(int val)
    {
        node * newnode = CreateNewNode(val);
        if(sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        head->pre = newnode;
        newnode->nxt = head;
        head = newnode;
        sz++;
    }
    void Pop_back()
    {
        if(sz == 0)cout<<"Deque is empty\n";
        sz--;
        if(sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            return;
        }
        node *a = tail;
        tail = tail->pre;
        delete a;
        tail->nxt = NULL;
    }
    void Pop_front()
    {
       if(sz == 0)cout<<"Deque is empty\n";
        sz--;
        if(sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            return;
        }
        node *a = head;
        head = head->nxt;
        delete a;
        head->pre = NULL;
    }
    int Front()
    {
        if(sz == 0){
            cout<<"Deque is empty\n";
            return -1;
        }
        return head->data;
    }
    int Back()
    {
        if(sz == 0){
            cout<<"Deque is empty\n";
            return -1;
        }
        return tail->data;
    }
};

int main()
{
    Deque d;
    d.Push_back(5);
    d.Push_back(10);
    d.Push_back(15);

    cout<<d.Back()<<"\n";
    cout<<d.Front()<<"\n";

    d.Push_front(20);

    cout<<d.Back()<<"\n";
    cout<<d.Front()<<"\n";
}
