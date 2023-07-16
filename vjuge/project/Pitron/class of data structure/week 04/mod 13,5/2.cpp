#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class LinkedList
{
public:
    node * head;
    LinkedList()
    {
        head = NULL;
    }
    node * CreatenewNode(int value)
    {
        node * newnode =new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
    void InseratHead(int value)
    {
      node * a = CreatenewNode(value);
      if(head == NULL)
      {
          head = a;
          return;
      }
      a->next = head;
      head = a;
    }
    void deleteFistIndex()
    {
        if(head == NULL)
        {
            return;
        }
        node *a = head;
        head = a->next;
        delete a;
    }
    void PrintOflist()
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

int main()
{
    LinkedList l;
    l.InseratHead(5);
    l.InseratHead(4);
    l.InseratHead(3);
    l.InseratHead(2);
    l.InseratHead(1);
    l.PrintOflist();
    l.deleteFistIndex();
    l.PrintOflist();
}
