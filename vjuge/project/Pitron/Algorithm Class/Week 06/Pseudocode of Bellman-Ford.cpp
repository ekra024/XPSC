/*//Pseudocode : Bellman-Ford

Input -> A weighted graph & a src node (with no negative cycles)
Output -> Shortest distance from src node to all other nodes

create a distance array "d" with all values to infinity
d[src] = 0

negative_cycle = false;

for i = 1 to n-1 // O(n)
    for all edge e(u, v, w); // O(E)--> O(n*E)
        if d[u] + w < d[v]
        d[v] = d[u] + w
        if i==n
            negative_cycle = true

print the distance array 'd'

*/

//time complexity O(|v| * |E|) --> O(n^3)
// space complexity O(n)

#include<bits/stdc++.h>
using namespace std;

int main()
{

}
