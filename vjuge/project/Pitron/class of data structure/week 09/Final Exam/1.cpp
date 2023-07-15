#include<bits/stdc++.h>
using namespace std;


vector<string> merge_sort(vector<string>&v)
{
    if(v.size()<=1)return v;
    int mid = v.size()/2;
    vector<string>a,b;
    for(int i=0;i<mid;i++){
        a.push_back(v[i]);
    }
    for(int i=mid;i<v.size();i++){
        b.push_back(v[i]);
    }
    vector<string>sorted_a = merge_sort(a);
    vector<string>sorted_b = merge_sort(b);

    int id1=0,id2=0;
    vector<string>sorted_pro;
    for(int i=0;i<v.size();i++)
    {
        if(id1 ==sorted_a.size()){
            sorted_pro.push_back(sorted_b[id2]);
            id2++;
        }
        else if(id2 == sorted_b.size()){
            sorted_pro.push_back(sorted_a[id1]);
            id1++;
        }
        else if(sorted_a[id1]>sorted_b[id2])
        {
            sorted_pro.push_back(sorted_b[id2]);
            id2++;
        }
        else if(sorted_a[id1]<sorted_b[id2])
        {
            sorted_pro.push_back(sorted_a[id1]);
            id1++;
        }
    }
    return sorted_pro;
}
int main()
{
    int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        v.push_back(s);
    }

    vector<string>sorted_str = merge_sort(v);

    for(int i=0;i<sorted_str.size();i++){
        cout<<sorted_str[i]<<" ";
    }
    cout<<"\n";
}
