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
        int mid = sz/2;
        Node * a= head;

        if(head == NULL)
        {
            insertHead(value);
        }

        while(mid--)
        {
            a = a->nxt;
        }
       Node *newnode = new Node{value, a->prv, a};
        a->prv->nxt = newnode;
        a->prv = newnode;
        sz++;
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
    void Merge(LinkedList a)
    {
        if (a.head)
        {
            if (head== NULL)
            {
                head = a.head;
                tail = a.tail;
            }
            else
            {
                tail->nxt = a.head;
                a.head->prv = tail;
                tail = a.tail;
            }
            sz += a.sz;
            a.head = NULL;
            a.tail = NULL;
            a.sz = 0;
        }
    }

};

int main()
{
    LinkedList a;
	LinkedList b;

	a.insertHead(1);
	a.insertTail(5);
	a.insertMid(3);
	a.insertHead(0);
	a.insertTail(10);
	a.print(); // prints  0 1 3 5 10

	b.insertHead(10);
	b.insertTail(50);
	b.insertMid(30);
	b.insertHead(9);
	b.insertTail(100);
	b.print(); // prints  9 10 30 50 100

	a.Merge(b);
	a.print(); // prints  0 1 3 5 10 9 10 30 50 100
	b.print(); // prints  9 10 30 50 100


}

