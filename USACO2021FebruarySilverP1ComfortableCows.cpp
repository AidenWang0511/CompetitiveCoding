#include<bits/stdc++.h>
using namespace std;

typedef pair<int, pair<int, int>> pii; //adj, x, y
const int MAXN = 2002;
const int z = 1000;
int cow[MAXN][MAXN];
bool vis[MAXN][MAXN];
bool vis2[MAXN][MAXN];
vector<pair<int,int>> pos;
queue<pair<int,int>> q,q2;
int N;

void addAdj(int x, int y){
    cow[x-1][y]++;
    if(cow[x-1][y] == 3){
        q.push({x-1,y});
        if(!vis2[x-1][y]) q2.push({x-1,y});
    }

    cow[x+1][y]++;
    if(cow[x+1][y] == 3){
        q.push({x+1,y});
        if(!vis2[x+1][y]) q2.push({x+1,y});
    }

    cow[x][y-1]++;
    if(cow[x][y-1] == 3){ 
        q.push({x,y-1});
        if(!vis2[x][y-1]) q2.push({x,y-1});
    }

    cow[x][y+1]++;
    if(cow[x][y+1] == 3){
        q.push({x,y+1});
        if(!vis2[x][y+1]) q2.push({x,y+1});
    }
}

void removeAdj(int x, int y){
    cow[x-1][y]--;
    cow[x+1][y]--;

    cow[x][y-1]--;

    cow[x][y+1]--;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    
    cin>>N;
    for(int i=1,x,y; i<=N; i++){
        int ans = 0; int debug = 0;
        cin>>x>>y;
        //cout<<"i: "<<i<<endl;
        x = x+z;
        y = y+z;
        vis[x][y] = true;
        vis2[x][y] = true;
        addAdj(x,y);
        pos.push_back({x,y});
        if(cow[x][y] == 3){
            q.push({x,y});
        }
        for(auto t:pos){
            if(cow[t.first][t.second] == 3){
                q.push({t.first,t.second});
                debug++;
            }
            vis[t.first][t.second] = true;
            vis2[t.first][t.second] = true;
        }
        //cout<<"debug: "<<debug<<endl;
        while(!q.empty()){
            int a = q.front().first, b = q.front().second;
            if(vis[a][b] && cow[a][b] == 3){
                if(!vis[a+1][b]){
                    vis[a+1][b] = true;
                    q.push({a+1,b});
                    q2.push({a+1,b});
                    addAdj(a+1,b);
                    ans++;
                }
                if(!vis[a-1][b]){
                    vis[a-1][b] = true;
                    q.push({a-1,b});
                    q2.push({a-1,b});
                    addAdj(a-1,b);
                    ans++;
                }
                if(!vis[a][b+1]){
                    vis[a][b+1] = true;
                    q.push({a,b+1});
                    q2.push({a,b+1});
                    addAdj(a,b+1);
                    ans++;
                }
                if(!vis[a][b-1]){
                    vis[a][b-1] = true;
                    q.push({a,b-1});
                    q2.push({a,b-1});
                    addAdj(a,b-1);
                    ans++;
                }
            }
            q.pop();
        }
        cout<<ans<<endl;
        while(!q2.empty()){
            int a = q2.front().first, b = q2.front().second;
            removeAdj(a,b);
            q2.pop();
        }
        memset(vis, false, sizeof(vis));
    }    
    
   

    return 0;
}