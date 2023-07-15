#include<bits/stdc++.h>
using namespace std;
int is_palindrome(string ans,int first,int last)
{
    if(first==last)return 1;
    else if(ans[first]!=ans[last])return 0;
    else return is_palindrome(ans,first+1,last-1);

}
int main()
{
    string s;
    cin>>s;
    int first=0,last=s.size()-1;
    if(is_palindrome(s,first,last))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
