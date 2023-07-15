#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(10);
    q.push(3);
    q.push(7);
    q.push(9);
    q.push(17);

    cout <<q.front()<<endl;

    while(!q.empty())
    {
        cout << q.front()<<"\n";
        q.pop();
    }
}
