#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node * next;
        Node * pre;
};
class Stack{
    public:
       Node * head;
       Node * top;
       int sz = 0;
       Stack()
       {
        head->pre = NULL;
        head->next = NULL;
       }

       Node * CreateANode(int value)
       {
        
       }

};
int main()
{

}