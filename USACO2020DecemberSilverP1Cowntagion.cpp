#include<bits/stdc++.h>
using namespace std;

//BFS function
void bfs(vector<vector<int>>&adj,vector<int>&visited,int s){
    queue<int>q;
    q.push(s);
    visited[s]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++){
            if(visited[adj[u][i]]==0){
                visited[adj[u][i]]=1;
                q.push(adj[u][i]);
            }
        }
    }
}


int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    
    
    return 0;
}