#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;

class Graph {
    int V; // vertex
    list<int> *l; 

public:
     Graph(int V){
        this->V = V;
        l= new list<int> [V];
     }

     void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
     }

     bool isCycleUndirBFS(int src, vector<bool> &vis){ //bfs code - core bfs logic, Es logic pr cycle detection hoga //TC: O(V+E)
        queue<pair<int, int>> q;
        
        q.push({src, -1});
        vis[src]= true;

        while(q.size() > 0){
            int u = q.front().first;
            int parU = q.front().second; // parent of u
            q.pop();

            list<int> neighbors = l[u];
            for(int v : neighbors){
                if(!vis[v]){
                    q.push({v, u}); // u-----v
                    vis[v] = true;
                } else if (v != parU){ // cycle condn
                    return true;
                }
            }
        }

        return false;

     }

     bool isCycle(){ // Es cycle ke andar sare source nodes(V) ke liye loop chla sakte hai
        vector<bool> vis(V, false);
        for(int i = 0; i<V; i++){// for disconnected graph if exist
            if(!vis[i]){
                if(isCycleUndirBFS(i, vis)){
                    return true;
                }
            }
        }
        return false;
     }
     
};

int main(){
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(3, 4);
    
  cout << g.isCycle() << endl;
    return 0;
}