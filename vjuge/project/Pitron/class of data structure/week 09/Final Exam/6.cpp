#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;cin>>n;
   vector<int>ans;
   deque<int>dq;
   for(int i=0;i<n;i++){
     int input;cin>>input;
     dq.push_back(input);
   }
    for(int i=0;i<n;i++){
        if(dq.empty())break;
        if(dq.front()>dq.back())
        {
            ans.push_back(dq.back());
            dq.pop_back();
        }
        else{
            ans.push_back(dq.front());
            dq.pop_front();
        }
    }
    for(auto it:ans)
        cout<<it<<" ";
    cout<<"\n";
}
