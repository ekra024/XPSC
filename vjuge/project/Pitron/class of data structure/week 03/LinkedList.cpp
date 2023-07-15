#include<bits/stdc++.h>
using namespace std;
int Value = 0;
class node{
public:
    int data;
    node *next;
};

class LinkedList{
public:
    node * head;
    LinkedList()
    {
        head = NULL;
    }

    node * CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
    int getSize()
    {
        int val = Value;
        return val;
    }
    void InsertAtHead(int value)
    {
        Value++;
        node *a = CreateNewNode(value);
        if(head == NULL){
            head = a;
            return;
        }

        a->next = head;
        head = a;
    }
    void swapFirst()
    {
        if(Value<2)return;
        else{

        }
    }
    void Traverse()
    {
        node* a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<endl;
    }

    int getValue(int index)
    {
        node* a = head;
        int idx=0;
        while(a!=NULL)
        {
            if(idx == index){
                return a->data;
            }
            a = a->next;
            idx++;
        }
        return -1;
    }
    void SearchAllValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!=NULL)
        {
            if(a->data == value){
               cout<<value<<" is found at index "<<index<<endl;
            }
            a = a->next;
            index++;
        }
    }

};
int main()
{
    LinkedList l;
    cout<<l.getSize()<<endl;
    l.InsertAtHead(5);

    cout<<l.getSize()<<endl;
    l.InsertAtHead(6);
    l.InsertAtHead(30);

    cout<<l.getSize()<<endl;

    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout <<l.getValue(2)<<endl;
    cout <<l.getValue(6)<<endl;

    //l.printReverse();
    l.Traverse();
   // l.swapFirst();
    l.Traverse();
   // l.printReverse();


}

