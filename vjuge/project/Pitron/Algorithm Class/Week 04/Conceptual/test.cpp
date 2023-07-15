// space complexity -> O(n)
// time complexity -> O(n^2)

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int INF = 1e5;

int distance[N];
int visited[N];
int d[N];
vector<pair<int, int> >adj_list[N];
int nodes, edges;

void dijkstra(int src)
{

    for(int i = 1; i <= nodes; i++){
        d[i] = INF;
    }
//    for(int i = 1 ; i <= nodes ; i++) {
//        distance[i] = INF;
//    }
//    distance[src] = 0;
//
//   for(int i = 0 ; i < nodes ; i++) {
//        int selected_node = -1;
//        for(int j = 1 ; j <= nodes ; j++) {
//            if(visited[j] == 1) continue;
//            if(selected_node == -1 || distance[selected_node] > distance[j]) {
//                selected_node = j;
//            }
//        }
//        visited[selected_node] = 1;
//
//        for(auto adj_entry : adj_list [selected_node]) {
//            int adj_node = adj_entry.first;
//            int edge_cst = adj_entry.second;
//
//            if(distance[selected_node] + edge_cst < distance[adj_node]) {
//                distance[adj_node] = distance[selected_node] + edge_cst;
//            }
//        }
//   }
}
int main()
{
    cin >> nodes >> edges;

    for(int i = 0 ; i < edges ; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }

    int src = 1;
    dijkstra(src);

    for(int i = 1 ; i <= nodes ; i++) {
        cout << d[i] << " ";
    }
    cout<<"\n";
}

