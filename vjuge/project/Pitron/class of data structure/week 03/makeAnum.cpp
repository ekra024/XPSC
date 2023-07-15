#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int num;cin>>num;
    sort(v.begin(),v.end());
    int idx1=0,idx2=v.size()-1;
    for(int i=0;i<v.size();i++)
    {
        if(idx1==idx2)break;
        if((v[idx1]+v[idx2])==num){
            cout<<"YES"<<endl;
            return 0;
        }
        else if((v[idx1]+v[idx2])>num)
        {
            idx2--;
        }
        else if((v[idx1]+v[idx2])<num)
        {
            idx1++;
        }
    }
    cout<<"NO"<<endl;
}
