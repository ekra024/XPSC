#include<bits/stdc++.h>
using namespace std;
int Sqrt(int num)
{
    int l=1;
    int h=num;
    int ans;
    while(l<=h)
    {
         int mid=(h+l)/2;
         cout<<mid<<endl;
        if((mid*mid)>=num)
        {
            ans = mid;
            h = mid-1;
        }
        else if((mid*mid)<=num)
        {
            ans = mid;
            l = mid+1;
        }
    }
    cout<<ans<<endl;
    return ans;
}
int main()
{
    int n;cin>>n;
    cout<<Sqrt(n)<<endl;
}

