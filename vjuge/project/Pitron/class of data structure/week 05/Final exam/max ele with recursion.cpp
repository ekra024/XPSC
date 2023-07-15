#include<bits/stdc++.h>
using namespace std;
int max_ele(int a[],int len,int mx)
{
    if(len==0)return mx;
    else {
        if(a[len]>mx)mx=a[len];
        return max_ele(a,len-1,mx);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int mx=a[0];
    cout<<max_ele(a,n-1,mx)<<endl;
}
