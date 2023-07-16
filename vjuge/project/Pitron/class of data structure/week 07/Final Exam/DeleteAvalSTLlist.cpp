#include<bits/stdc++.h>
using namespace std;
void deleteValue(list<int>&l,int value)
{
    auto it = l.begin();
    int idx = 0;
    while(it!=l.end())
    {
        if(*it==value){
            l.erase(it);
            break;
        }
        idx++;
        it++;
    }
}
int main()
{
    int n,val;cin>>n;
    list<int>l;
    for(int i=0;i<n;i++)
    {
        int in;cin>>in;
        l.push_back(in);
    }
    cin>>val;
    deleteValue(l,val);
    auto it=l.begin();
    while(it!=l.end())
    {
        cout<<*it<<" ";
        it++;
    }
}
