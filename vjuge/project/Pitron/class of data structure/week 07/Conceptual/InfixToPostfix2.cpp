#include<bits/stdc++.h>
using namespace std;

int prec(char ch)
{

    if(ch=='*'||ch=='/')
        return 1;
    return 0;
}
int main()
{
    string s,ans;cin>>s;
    stack<char>st,st2;
    int k=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z')
           ans += s[i];
        else if(s[i]==')')
        {
            while(!st.empty())
            {
                cout<<ans<<"\n";
                if(st.top()=='(')break;
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            char cur=s[i];
            while(st.size()>=1 && prec(st.top())>=prec(cur)&& cur!='(')
            {
                ans += st.top();
                st.pop();
            }
            st.push(cur);
            cout<<st.top()<<" ";
        }
    }
    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout<<"\n";
    cout<<ans<<"\n";
}
