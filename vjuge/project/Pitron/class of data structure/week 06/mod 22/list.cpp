#include<bits/stdc++.h>
using namespace std;

void print(list<int>l)
{
    //list<int>::iterator a = l.begin();
    auto a = l.begin();
    while(a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<endl;
}

void Insert(list<int>&l, int index ,int value)
{
    auto it = l.begin();//O(1);
    advance(it, index);//O(index);
    l.insert(it,value);//O(1)
}

void Delete(list<int>&l, int index, int value)
{
    auto it = l.begin();
    advance(it,index);
    l.erase(it);
}
int main()
{
    list<int> l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);

    print(l);

    l.push_back(40);
    l.push_back(50);
    print(l);

    l.pop_back();
    l.pop_front();
    print(l);

    //insert at any position
    Insert(l,1,100);
    print(l);

    Delete(l,1,100);
    print(l);
    return 0;
}
