#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;
class Queue
{
public:
    int a[MAX_SIZE];
    int l,r;
    Queue()
    {
        l = 0;
        r =-1;
    }

    void enqueue(int value)
    {
        if(r+1 >= MAX_SIZE)
        {
            cout<<"Queue is full\n";
            return;
        }
        r++;
        a[r] = value;
    }
    void  dequeue()
    {
        if(l > r)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;

    }
    int Front()
    {
        if(l>r)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];

    }

};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    cout<<q.Front()<<"\n";
    q.dequeue();
    cout<<q.Front()<<"\n";
    q.dequeue();
    cout<<q.Front()<<"\n";
    q.dequeue();
}
