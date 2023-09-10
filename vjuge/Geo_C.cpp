#include<bits/stdc++.h>
#include<math.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll t;cin>>t;
   for(ll i=1;i<=t;i++){
        int ax,ay,bx,by,cx,cy,dx,dy;cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx = ax+cx-bx;
        dy = ay+cy-by;
         //double x1=abs(ax),y1=abs(ay),x2=abs;
        int area=((((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax))))*1/2;
        if(area<0)area*=-1;

        cout<<"Case "<<i<<": ";

         cout<<dx<<" "<<dy<<" "<<area<<endl;


        //cout<<((a*2)-bx)<<" "<<((b*2)-by)<<" "<<(abs(bx-ax))*(abs(cy-by))<<endl;

}
}

