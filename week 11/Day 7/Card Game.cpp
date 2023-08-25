#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
int mod = 998244353;
const int N=1e4 + 5;

vector<ll> F,invF;
vector<ll> MInv;
void Modular_Inverse(int p){
    MInv.resize(N+1);

    MInv[0]=MInv[1]=1;
    for(int i=2;i<=N;i++){
        MInv[i]=(MInv[p%i]*(p-(p/i)))%p;
    }
}

void PreCalFacts(){
    F.resize(N+1);
    invF.resize(N+1);

    F[0]=F[1]=1;
    for(int i=2;i<=N;i++){
        F[i]=(i*F[i-1])%mod;
    }

    Modular_Inverse(mod);

    invF[0]=invF[1]=1;
    for(int i=2;i<=N;i++){
        invF[i]=(MInv[i]*invF[i-1])%mod;
    }
}

ll nCr(int n,int r){
    if(r > n || n < 0 || r < 0)return 0;
    return F[n]*invF[r]%mod*invF[n-r]%mod;
}

ll Call(int n,int alice){
    if(n==2){
        if(alice){
            return 1;
        }
        return 0;
    }
    ll ans=0;
    if(alice){
        ans = nCr(n-1,(n/2)-1);
        ans+= Call(n-2,alice^=1);
        ans%=mod;
    }
    else{
        ans = nCr(n-2,(n/2)-2);
        ans+= Call(n-2,alice^=1);
        ans%=mod;
    }

    return ans;
}

int main(){

    optimize();
    PreCalFacts();

    ll t; cin >> t;
    while(t--){
        int n; cin>>n;

        ll alice = Call(n,1);
        ll boris = Call(n,0);
        ll draw = nCr(n,n/2) - alice;

        if(draw<0){
            draw+=mod;
        }
        draw-=boris;
        if(draw<0){
            draw+=mod;
        }

        cout<<alice<<' '<<boris<<' '<<draw<<'\n';
    }
}
