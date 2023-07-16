#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int cnt=1;
    for(int i=0;i<n;i++){
        cout<<i+1<<"iteration"<<endl;
        for(int j=0;j<n-cnt;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
                cout<<j+1<<"step :";
                for(int k=0;k<n;k++)cout<<a[k]<<" ";
                cout<<endl;
        }
       // if(sorted = true)break;
        cnt++;
        cout<<endl;
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
//memory complexity O(n);
//time complexity O(n^2);
