/*//Pseudocode : Bellman-Ford

Input -> A weighted graph & a src node (with no negative cycles)
Output -> Shortest distance from src node to all other nodes

create a distance array "d" with all values to infinity
create a parent array
d[src] = 0

negative_cycle = false;
last update_node = -1;

for i = 1 to n-1 // O(n)
    for all edge e(u, v, w); // O(E)--> O(n*E)
        if d[u] + w < d[v]
        d[v] = d[u] + w
        parent[v] = u
        if i==n
            negative_cycle = true
            last_updated_node = v

print whether negative cycle exists


if negative_cycle == false
    print the distance array "d"
    selected node = destination_node
    declare a vector path
    while true:
        path.push_back(selected_node)
        if selected_node == src
            break;
        selected_node = parent[selected_node]
    reverse the vector path
    print the path

else
    print negative cycle exits
    selected_node = last_updated_node
    for i = 0 to n-1
        selected_node = parent[selected_node]
    declare a vector "cycle"
    cycle.push_back(selected_node)
    while true
        selected_node = parent[selected_node]
        cycle.push_back(selected_node)
        if(selected_node == first_node)
            break
    reverse the 'cycle' vector
    print the cycle

*/

//time complexity O(|v| * |E|) --> O(n^3) or O(n*m)
// space complexity O(n)

#include<bits/stdc++.h>
using namespace std;

int main()
{

}
