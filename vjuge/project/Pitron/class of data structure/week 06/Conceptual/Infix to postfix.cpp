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
    string s;cin>>s;
    stack<char>st,st2;
    int k=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z')
           cout<<s[i];
        else if(s[i]=='('){
            k = 1;
           }
        else if(s[i]==')'){
            while(st2.empty()==false)
            {
                cout<<st2.top();
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
                cout<<st.top();
                st.pop();
            }
            st.push(cur);
        }
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}
