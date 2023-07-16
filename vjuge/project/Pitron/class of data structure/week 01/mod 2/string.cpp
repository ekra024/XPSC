#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    getline(cin,s);
    s.erase(s.begin()+2,s.begin()+5);
    s.pop_back();
    cout<<s<<endl;

    return 0;
}

