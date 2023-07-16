#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>pq;
    pq.push(4);
    pq.push(6);
    pq.push(4);
    pq.push(10);

    cout << pq.size() <<"\n";
    while(!pq.empty())
    {
        cout << pq.top() <<" ";
        pq.pop();
    }
}
