/*

// space complexity -> O(n)
// time complexity 

- crete a distance array 'd'
- initialize all value of 'd' to infinity 
- d[src] = 0
- create a visited array and mark all nodes as unvisited
- take an empty reverse priority_queue 'pq'
- pq.push({0, src})

- for i = 0 to n - 1
    - head_distance, head = pq.front()
    - pq.pop();
    - if visited[head] == 1;ignore
    - visited[head] = 1
    - for all adj_node of head
        - if d[head] + c(head, adj_node) < d[adj_node]
            - d[adj_node] = d[head] + c(head, adj_node)
            - pq.push({adj_node}, adj_node)

output array 'd'

*/
/*

10 10
1 4 201
2 3 238
3 4 40
3 6 231									     
3 8 45
4 5 227
4 6 58
4 9 55
5 7 14
6 10 242


*/