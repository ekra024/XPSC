#include<bits/stdc++.h>
using namespace std;
const int maxN = 100;

int main()
{
    int n,e;
    cin >> n >> e;
    vector< pair<int, int> > adjList[maxN];

    for(int i = 1; i <= e; i++){
        int u, v, w;
        cin >> u>> v>> w;
        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w});

    }

    for(int i = 0; i <= n; i++){
        cout<< i << " -> ";
        for(auto it: adjList[i])
            cout << "(" <<it.first <<" "<<it.second << ")";
        cout << "\n";
    }
}
