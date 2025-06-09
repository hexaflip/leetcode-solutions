#include <iostream>
#include <math.h>
#include <vector>
#include <string>

void dfs(int starting,std::vector<int> adj[], bool visited[]){
    // if we have already visited the node
    if (visited[starting]) return;
    //  if not then we set it equal to true
    visited[starting] = true;
    std::cout << starting;
    // go through the other nodes that are connected the node
    for (auto u: adj[starting]){
        dfs(u, adj, visited);
    }
}

