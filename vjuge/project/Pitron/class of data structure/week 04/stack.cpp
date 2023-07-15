#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>numst;
    numst.push(10);
    numst.push(20);
    numst.push(30);
    numst.push(40);
    numst.push(50);
    cout<<numst.top()<<endl;
    cout<<numst.empty()<<endl;

    return 0;
}