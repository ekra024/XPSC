#include<bits/stdc++.h>
using namespace std;

class Node{
public:
   int data;
   Node * pre;
   Node * nxt;

   Node(int val){
    data = val;
    nxt = NULL;
    pre = NULL;
   }
};

class Stack{
    Node * head;
    Node * top;
    int sz = 0;
public:
    Stack(){
        head = NULL;
        top = NULL;
    }

    void Push(int val){
        sz++;
        Node * nwNode = new Node(val);
        if(head == NULL){
            head =top = nwNode;
            return;
        }
        top->nxt = nwNode;
        nwNode->pre = top;
        top = nwNode;
    }
    int Top()
    {
        return top->data;
    }
    void Pop(){
        Node * delNode = top;
        if(top == head){
            head = top = NULL;
        }
        else{
        top = delNode->pre;
        top->nxt = NULL;
        }
        delete delNode;
        sz--;
    }
    int Size()
    {
        return sz;
    }
    bool Empty()
    {
        if(sz==0)return true;
        return false;
    }
};

int main()
{
    Stack numst;
    //numst.Push(10);
    numst.Push(20);
    numst.Push(30);
     numst.Push(40);

    while(numst.Empty() == false){
        cout << numst.Top()<<" ";
        numst.Pop();
    }

}