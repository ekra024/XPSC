#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    deque<char>dq;
    for(int i=0;i<s.size();i++){
        dq.push_back(s[i]);
    }
    for(int i=0;i<s.size();i++)
    {
        if(dq.size()<=1)break;
        else if(dq.front()!=dq.back())break;
        else if(dq.front()==dq.back())
        {
            dq.pop_front();
            dq.pop_back();
        }
    }

    if(dq.size()<=1)cout<<"Yes\n";
    else cout<<"No\n";
}
