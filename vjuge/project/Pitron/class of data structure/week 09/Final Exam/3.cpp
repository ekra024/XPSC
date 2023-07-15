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
        newnode->nxt = head;
        return newnode;
    }

    void insertHead(int value)
    {
        Node *a = CreateNewNode(value);
        if (head)
        {
            head->prv = a;
        }
        else
        {
            tail = a;
        }
        head = a;
        sz++;
    }


    void insertTail(int value)
    {
        Node *newnode = new Node{value, tail, NULL};
        if (tail)
        {
            tail->nxt = newnode;
        }
        else
        {
            head = newnode;
        }
        tail = newnode;
        sz++;
    }


    void insertMid(int value)
    {


        if (sz == 0)
        {
            insertHead(value);
            return;
        }
        Node *current = head;
        int count = sz / 2;
        while (count--)
        {
            current = current->nxt;
        }
        Node *newnode = new Node{value, current->prv, current};
        current->prv->nxt = newnode;
        current->prv = newnode;
        sz++;
    }


    void print()
    {
        Node *current = head;
        while (current)
        {
            cout << current->value << " ";
            current = current->nxt;
        }
        cout << endl;
    }


    void Merge(LinkedList a)
    {
        if (a.head)
        {
            if (head)
            {
                tail->nxt = a.head;
                a.head->prv = tail;
                tail = a.tail;
            }
            else
            {
                head = a.head;
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
    a.print(); // prints 0 1 3 5 10


    b.insertHead(10);
    b.insertTail(50);
    b.insertMid(30);
    b.insertHead(9);
    b.insertTail(100);
    b.print(); // prints 9 10 30 50 100


    a.Merge(b);
    a.print(); // prints 0 1 3 5 10 9 10 30 50 100
    b.print(); // prints  9 10 30 50 100


    return 0;
}
