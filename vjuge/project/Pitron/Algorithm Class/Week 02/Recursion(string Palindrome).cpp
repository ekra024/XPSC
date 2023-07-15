#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string s)
{
    // base case
    if(s.size()<=1)return true;

    int n = s.size();
    string small_str = s.substr(1,n-2);
    return is_palindrome(small_str) && (s[0] == s.back());
}

int main()
{
    string s;cin>>s;
    if(is_palindrome(s))
        cout<<"Palindrome\n";
    else cout<<"No\n";
}
