#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            st.push(s[i]);
        else{
            if(st.empty()){
                cout<<"No\n";
                return 0;
            }
            else if(s[i]==')' && st.top()=='(')
                st.pop();
            else if(s[i]=='}' && st.top()=='{')
                st.pop();
            else if(s[i]==']' && st.top()=='[')
                st.pop();
            else break;
        }
    }
    if(st.empty())cout<<"Yes\n";
        else cout<<"No\n";
}
