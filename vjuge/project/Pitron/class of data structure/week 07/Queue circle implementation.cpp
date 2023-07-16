#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 500;
class Queue
{
public:
    int a[MAX_SIZE];
    int l,r;
    int sz;
    Queue()
    {
        l = 0;
        r =-1;
        sz = 0;
    }
    //O(1)
    void enqueue(int value)
    {
        if(sz == MAX_SIZE)
        {
            cout<<"Queue is full\n";
            return;
        }
        r++;
        if(r == MAX_SIZE-1)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }
    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;
        if(l == MAX_SIZE-1)
        {
            {
                l = 0;
            }
        }
        sz--;

    }
    int Front()
    {
        if(sz==0)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];

    }
    int Size()
    {
        return sz;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout<<q.Size()<<endl;
    cout<<q.Front()<<"\n";
    q.dequeue();
    cout<<q.Front()<<"\n";
    q.dequeue();
    cout<<q.Front()<<"\n";
    q.dequeue();

    cout<<q.Size()<<"\n";
}

