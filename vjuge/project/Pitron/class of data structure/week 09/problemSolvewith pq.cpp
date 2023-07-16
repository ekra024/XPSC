#include<bits/stdc++.h>
using namespace std;

int digit(int x)
{
    int temp = x,cnt=0;
    while(temp != 0)
    {
        cnt++;
        temp /= 10;
    }
    return cnt;
}
int main()
{
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    priority_queue<int>p1,p2;

    for(int i=0;i<n;i++)
    {
        p1.push(a[i]);
        p2.push(b[i]);
    }
    int ans = 0;


    while(p1.size())
    {
        int x = p1.top();
        int  y = p2.top();

        if(x==y)
        {
            p1.pop();
            p2.pop();
            continue;
        }
        if(x > y){
            p1.pop();
            p1.push(digit(x));
            ans++;
        }
        else {
            p2.pop();
            p2.push(digit(y));
            ans++;
        }

    }

    cout<<ans<<"\n";
}
