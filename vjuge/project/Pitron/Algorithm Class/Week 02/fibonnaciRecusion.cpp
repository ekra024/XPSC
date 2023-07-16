#include<bits/stdc++.h>
using namespace std;


int fibo(int n)
{
    if(n == 0)return 0;
    else if(n == 1) return 1;

    int num1 = fibo(n - 1);
    int num2 = fibo(n - 2);

    return num1+num2;

}

int main()
{
    int n;
    cin >> n;

    cout<< fibo(n)<<"\n";
}
