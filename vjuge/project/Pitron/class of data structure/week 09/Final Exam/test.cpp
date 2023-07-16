#include <bits/stdc++.h>
using namespace std;
#define ll long long
using namespace std;


class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};


class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }


    Node *CreateNewNode(int value)
    {
        Node *newnode = new Node;
        newnode->data = value;
        newnode->prev = NULL;
        newnode->next = head;
        return newnode;
    }


    void insertHead(int value)
    {
        Node *a = CreateNewNode(value);
        if (head)
        {
            head->prev = a;
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
        Node *newnode = CreateNewNode(value);
        if (tail)
        {
            tail->next = newnode;
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
        Node *newnode = CreateNewNode(value);
        if (sz == 0)
        {
            insertHead(value);
            return;
        }
        Node *current = head;
        int count = sz / 2;
        while (count--)
        {
            current = current->next;
        }
        current->prev->next = newnode;
        current->prev = newnode;
        sz++;
    }
    void print()
    {
        Node * a= head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<"\n";
    }
    int Size()
    {
        return sz;
    }
};
int main()
{
	DoublyLinkedList a;
	DoublyLinkedList b;

	a.insertHead(1);
	a.insertTail(5);
	a.insertMid(3);
	a.insertHead(0);
	a.insertTail(10);
	cout<<a.Size()<<"\n";
	a.print(); // prints  0 1 3 5 10

	b.insertHead(10);
	b.insertTail(50);
	b.insertMid(30);
	b.insertHead(9);
	b.insertTail(100);
	b.print(); // prints  9 10 30 50 100

}

