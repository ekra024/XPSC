#include<bits/stdc++.h>
using namespace std;
int binary_get(vector<int>a,int x,int n)
{
    int low = 0;
    int high = n;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(a[mid]==x){
            if(a[mid+1]==x||a[mid-1]==x)return 1;
            else return 0;
        }
        else if(x>a[mid]){
            low = mid+1;
        }
        else if(x<a[mid]){
            high = mid-1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(a);
    }
    int x;cin>>x;
    if(binary_get(v,x,n))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
