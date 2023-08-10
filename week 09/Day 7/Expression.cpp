#include<iostream>
using namespace std;
int main()
{
    int a,b,c,w,x,y,z,p;
    cin>>a>>b>>c;
    w = a+(b*c);
    x = a*(b+c);
    y = a*b*c;
    z = (a+b)*c;
    p = a+b+c;
    if(w>x && w>y && w>z && w>p)
        cout<<w;
    else if(x>y && x>z && x>p)
        cout<<x;
    else if(y>z && y>p)
        cout<<y;
    else if(z>p)
        cout<<z;
    else
        cout<<p;
}
