#include<bits/stdc++.h>
using namespace std;
int binary_sear(vector<int>a,int n,int x)
{
    int start = 0;
    int en = n;

    while(en>=start)
    {
        int mid = start+(en-start)/2;
        if(a[mid]==x)return mid;
        else if(x>a[mid]){
            start = mid + 1;
        }
        else if(x<a[mid]){
            en = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int input;cin>>input;
        v.push_back(input);
    }

    sort(v.begin(),v.end());

    int query;cin>>query;
    while(query--)
    {
        int num;cin>>num;
        if(binary_sear(v,n,num))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        cout<<(binary_sear(v,n,num))<<endl;
    }
}
