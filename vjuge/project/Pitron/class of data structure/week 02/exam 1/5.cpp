#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;cin>>n;
vector<int>d[n+1];
for(int i=1 ; i<=n ; i++){
    int cnt=0;
	for(int j=i ; j<=n ; j = j+i ){
		d[j].push_back(i);
        cnt++;cout<<cnt<<" ";
	}
	cout<<endl;
}

}
