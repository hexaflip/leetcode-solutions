#include <math.h>
#include <queue>
#include <vector>
#include <string>

using namespace std;


vector<int> Adj[10];

void bfs(int n){
    vector<bool> visited;
    queue<int> thing;
    vector<int> distances;

    visited[n] = true;
    distances[n] = 0;
    thing.push(n);

    while (!thing.empty()){
        auto t = thing.front();
        thing.pop();
        // process the node here
        for (auto u : Adj[t]){
            if (visited[u] == true) continue;
            visited[u] = true;
            distances[u] = distances[n] + 1;
            thing.push(u);
        }
    }
}