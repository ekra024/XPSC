#include<bits/stdc++.h>
using namespace std;

int prec(char ch)
{
    if(ch=='*'||ch=='/')
        return 1;
    else return 0;
}
int main()
{
    string s,ans="";cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
            ans+=s[i];
        else if(s[i]==')')
        {
            while(!st.empty())
            {
                //cout<<st.top()<<" ";
                if(st.top()=='(')break;
                //cout<<st.top()<<" ";
                ans+=st.top();
                st.pop();
            }
            cout<<st.top()<<"\n";
            st.pop();
        }
        else {
            char ch = s[i];
            while(st.size()>=1 && prec(st.top())>=prec(ch))
            {
                //cout<<st.top()<<" a";
                ans +=  st.top();
                st.pop();
            }
            st.push(s[i]);
            //cout<<st.top()<<"\n";
        }
    }

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    cout<<endl;
    cout<<ans<<"\n";
}
