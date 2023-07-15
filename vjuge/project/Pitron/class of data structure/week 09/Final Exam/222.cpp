#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node * prv;
    Node * nxt;
};

class LinkedList{
public:
    Node * head;
    Node * tail;
    int sz;

    LinkedList()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    Node * CreateNewNode(int value)
    {
        Node *newnode = new Node;
        newnode->value = value;
        newnode->prv = NULL;
        newnode->nxt = NULL;
        return newnode;
    }

    void insertTail(int value)
    {
        Node* newnode = CreateNewNode(value);
        if(sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->prv = tail;
        tail = newnode;
        sz++;
    }

     void insertHead(int value)
    {
        Node * newnode = CreateNewNode(value);
        if(sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        head->prv = newnode;
        newnode->nxt = head;
        head = newnode;
        sz++;
    }
    void insertMid(int value)
    {
        sz++;
        int mid = sz/2;
        int cnt = 0;
        Node * a= head;
        if(head == NULL)
        {
            head = tail = NULL;
            return;
        }
        while(mid != cnt)
        {
            a = a->nxt;
            cnt++;
        }
        Node * newnode = CreateNewNode(value);
        Node * p = a->nxt;
        Node * c = a->nxt;
        Node * q = c->prv;

        p->nxt = newnode;
        q->prv = newnode;
        newnode->prv = p;
        newnode->nxt = q;
    }
    void print()
    {
        Node * a= head;
        while(a != NULL)
        {
            cout<<a->value<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

};

int main()
{
	LinkedList a;
	LinkedList b;

	a.insertHead(1);
	a.insertTail(5);
	//a.insertMid(3);
	a.insertHead(0);
	a.insertTail(10);
	a.print(); // prints  0 1 3 5 10

	b.insertHead(10);
	b.insertTail(50);
	//b.insertMid(30);
	b.insertHead(9);
	b.insertTail(100);
	b.print(); // prints  9 10 30 50 100

}

