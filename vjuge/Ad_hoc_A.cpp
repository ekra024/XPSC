#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll st,f1,f2,f3;
    for(ll i=1;;i++){
        cin>>st>>f1>>f2>>f3;
        if(st==0 && f1==0 && f2==0 && f3==0)break;
        else{
            cout<<1080+((st-f1+40)%40+(f2-f1+40)%40+(f2-f3+40)%40)*9<<endl;
        }
    }
}

