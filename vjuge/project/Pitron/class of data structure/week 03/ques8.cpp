#include<bits/stdc++.h>
using namespace std;
vector<int>even_generator(vector<int>a)
{
    vector<int>even_v;
    for(int i=0;i<a.size();i++){
        if(a[i]%2==0)even_v.push_back(a[i]);
    }
    return even_v;
}
int main()
{
    vector<int>v = {2,5,7,4,8};
    vector<int>ans = even_generator(v);
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<endl;
}
