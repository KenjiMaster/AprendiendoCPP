#include<bits/stdc++.h>
using namespace std;

const int MAX = 100005;
vector<int> adj[MAX];
vector<bool> visited(MAX,false);
vector<int> parent(MAX,-1);

bool dfs(int start,int target){
    visited[start] = true;
    for(int vecino : adj[start]){
        if(!visited[vecino]){
            parent[vecino] = start;
            if(!(vecino == target)){
                dfs(vecino,target);
            }else{
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i < m ; i++){
        int v, u;
        cin >> v >> u;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    int inicio = 1;
    int fin = 7;
    dfs(inicio,fin);
    int padre = parent[fin];
    vector<int> path = {fin};
    while (padre != -1){
        path.push_back(padre);
        padre = parent[padre];
    }
    reverse(path.begin(),path.end());
    for(int i : path){
        cout << i << " ";
    }
    
    return 0;
}