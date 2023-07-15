#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int>st;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        st.push(x);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"\n";
}
