#include<bits/stdc++.h>
using namespace std;
int binary_sear(int a[],int k,int n)
{
    int s = 0;
    int e = n;
    while(e>=s){
        int mid = (s+e)/2;
       if(a[mid]==k)return mid;
       else if(k>a[mid]){
        s = mid + 1;
       }
       else if(k<a[mid]){
        e = mid - 1;
       }

    }
    return -1;
}
int main()
{
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<binary_sear(a,k,n)<<endl;
}
