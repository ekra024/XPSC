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
    string s,ans="";cin>>s;
    stack<char>st,st2;
    int k=0,res=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9')
           ans+=s[i];
        else if(s[i]=='('){
            k = 1;
           }
        else if(s[i]==')'){
            while(st2.empty()==false)
            {
                ans+=st2.top();
                st2.pop();
            }
            k = 0;
        }
        else if(k==1){
            st2.push(s[i]);
        }
        else{
            char cur=s[i];
            while(st.size()>=1 && prec(st.top())>=prec(cur))
            {
                ans+=st.top();
                st.pop();
            }
            st.push(cur);
        }
    }
    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
    }

    cout<<ans<<"\n";

    stack<int>st3;
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]>='0' && ans[i]<='9')
        {
            int num = ans[i]-'0';
            st3.push(num);
        }
        else{
            if(ans[i]=='+'){
                int a = st3.top();
                st3.pop();
                int b = st3.top();
                st3.pop();
                res = (b+a);
                st3.push(res);
            }
            else if(ans[i]=='-')
            {
               int a = st3.top();
                st3.pop();
                int b = st3.top();
                st3.pop();
                res = (b-a);
                st3.push(res);
            }
            else if(ans[i]=='*')
            {
                int a = st3.top();
                st3.pop();
                int b = st3.top();
                st3.pop();
                res = (b*a);
                st3.push(res);
            }
            else if(ans[i]=='/')
            {
               int a = st3.top();
                st3.pop();
                int b = st3.top();
                st3.pop();
                res = (b/a);
                st3.push(res);
            }
        }
    }
    cout<<res<<"\n";
}
