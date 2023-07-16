#include<bits/stdc++.h>
using namespace std;

template <class T>
class node{
public:
    T data;
    node *next;
    node * pre;
};

template <class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    node<T> * CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->next = NULL;
        newnode->pre = NULL;
        return newnode;
    }
    void InsertAtHead(T data)
    {
        sz++;
      node<T> * newnode = CreateNewNode(data);
      if(head == NULL)
      {
          head = newnode;
          return;
      }
      node<T> *a = head;
      newnode->next = a;
      a->pre = newnode;
      head = newnode;
    }

    void DeleteAtHead()
    {
       if(head == NULL)return;
       node<T> *a = head;
       node<T> *b = head->next;
       delete a;
       if(b!=NULL){
        b->pre = NULL;
       }
        head = b;
        sz--;
    }
    int getSize()
    {
        return sz;
    }

};
template <class T>
class Stack{
public:
    DoublyLinkedList<T> dl;

    Stack()
    {

    }
    T top()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack is empty"<<endl;
            T a;
            return a;
        }
        return dl.head->data;
    }
    void push(T val)
    {
        dl.InsertAtHead(val);
    }
    void pop()
    {
        if(dl.getSize()==0){
            cout<<"Stack is empty"<<endl;
            return;
        }
        dl.DeleteAtHead();
    }

    int GetSize()
    {
        return dl.getSize();
    }


};
//O(n^2)
int main()
{
    Stack <int> st;

    st.push(3);
    st.push(4);
    st.push(6);
    st.push(2);
    st.push(5);

     Stack <int> tmp;

     while(st.GetSize()>0){
       int t = st.top();
       st.pop();
       while(tmp.GetSize()>0)
       {
           if(tmp.top() < t)break;
           st.push(tmp.top());
           tmp.pop();
       }
       tmp.push(t);
     }
     swap(st,tmp);

    while(st.GetSize()>0){
        cout<<st.top()<<" ";;
        st.pop();
    }

}

