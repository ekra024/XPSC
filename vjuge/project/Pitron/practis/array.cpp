#include <iostream>
#include<bits\stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    string s;
    cin>>s;
    reverse(s.begin()+x-1,s.begin()+y-1);
    cout<<s<<endl;

    return 0;
}
