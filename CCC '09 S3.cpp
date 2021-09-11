#include<bits/stdc++.h>
using namespace std;
int x, y, adj[50][50]; char op;
vector<int> a = {1, 2, 6, 3, 4, 5, 3, 4, 7, 3, 3, 8, 9, 9, 15, 12, 12, 11, 13, 16, 16, 18};
vector<int> b = {6, 6, 7, 6, 6, 6, 4, 5, 8, 5, 15, 9, 10, 12, 13, 13, 11, 10, 14, 18, 17, 17};
void insert_edge(int u, int v){
    adj[u][v]=1; adj[v][u] = 1;
}
void delete_edge(int u, int v){
    adj[u][v]=0; adj[v][u] = 0;
}
int main(){
    for(int i=0; i<a.size(); i++)
        insert_edge(a[i], b[i]);
    while(cin>>op && op!='q') {
        if(op == 'i'){
            cin >> x >> y;
            insert_edge(x, y);
        }else if(op == 'd'){
            cin >> x >> y;
            delete_edge(x, y);
        }else if(op == 'n'){
            cin >> x; int sum = 0;
            for(int i=1; i<50; i++) sum += adj[x][i];
            cout << sum << endl;
        }else if(op == 'f'){
            cin >> x; unordered_set<int> st;
            for(int i=1; i<50; i++){
                if(adj[x][i]){
                    for(int j=1; j<50; j++)
                        if(adj[i][j] && j!=x && !adj[x][j]) st.insert(j);
                }
            }
            cout << st.size() << endl;
        }else if(op == 's'){
            cin >> x >> y;
            queue<int> q; vector<int> dis(50, -1);
            q.push(x); dis[x] = 0;
            while(!q.empty()){
                int cur = q.front(); q.pop();
                for(int nxt=1; nxt < 50; nxt++){
                    if(adj[cur][nxt] && dis[nxt]==-1){
                        q.push(nxt); dis[nxt] = dis[cur]+1;
                    }
                }
            }
            if(dis[y]==-1) cout << "Not connected" << endl;
            else cout << dis[y] << endl;
        }
    }
}
