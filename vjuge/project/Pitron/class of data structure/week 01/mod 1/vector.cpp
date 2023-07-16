#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    for(int i=0;i<10;i++){
        a.push_back(i);
    }
    a.insert(a.begin()+3 , 3,5);
    a.pop_back();
    a.erase(a.begin()+3,a.begin()+6);
    for(int i=0;i<a.size();i++)cout<<a[i]<<endl;
}
