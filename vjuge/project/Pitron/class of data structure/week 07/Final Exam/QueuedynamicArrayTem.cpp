#include<bits/stdc++.h>
using namespace std;

template<class T>
class Queue{
public:
    T *a;
    int array_cap;
    int sz;
    int s,e;
    Queue()
    {
        a = new T[1];
        array_cap = 1;
        sz = 0;
        s= 0;
        e = -1;
    }
    void remove_cycle()
    {
        if(s>e){
            int *tmp = new T[array_cap];
            int idx = 0;
            for(int i=s;i<array_cap;i++){
                tmp[idx] = i;
            }
            for(int i=0;i<=e;i++){
                tmp[idx] = i;
            }
            swap(tmp,a);
        }
    }
    void increse_capacity()
    {
        remove_cycle();
        int *tmp = new T[array_cap*2];
        for(int i=0;i<sz;i++)
        {
            tmp[i] = a[i];
        }
        swap(a,tmp);
        array_cap*=2;
        delete []tmp;
    }
    void enqueue(int val)
    {
        sz++;
        if(sz == array_cap)
            increse_capacity();
        e++;
        if(e == array_cap)
        {
            e = 0;
        }
        a[e]=val;
    }
    void dequeue()
    {
        if(sz == array_cap)
        {
            cout<<"Queue is empty\n";
            return;
        }
        s++;
        if(s==array_cap)s=0;
        sz--;
    }
    T Front()
    {
        if(sz == array_cap)
        {
            cout<<"Queue is empty\n";
            T a;
            return a;
        }
        return a[s];
    }
};

int main()
{
    Queue<int>q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<q.Front()<<"\n";
    q.dequeue();
    cout<<q.Front()<<"\n";
    q.dequeue();
    cout<<q.Front()<<"\n";
    q.dequeue();
    cout<<q.Front()<<"\n";
}
