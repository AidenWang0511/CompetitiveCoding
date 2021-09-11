#include <bits/stdc++.h>
using namespace std;

char mat[60][60];
bool vis[60][60];
int dis[60][60];
int x, y, a, b, N, M;
bool found = false;


void check(){
    pair<int, int> temp;
    queue <pair<int, int> > que;
    que.push({x, y});
    while (!que.empty()){
        temp = que.front();
        que.pop();
        int p = temp.first, q = temp.second;
        if (p == a && q == b){
            if (dis[p][q] < 60) found = true;
            else found = false;
            return;
        }
        if (p + 1 < M){
            if ((mat[p+1][q] != 'X') && (vis[p+1][q] == false)){
                que.push({p+1, q});
                dis[p+1][q] = dis[p][q] + 1;
                vis[p+1][q] = true;
            }
        }
        if (q + 1 < N){
            if ((mat[p][q+1] != 'X') && (vis[p][q+1] == false)){
                que.push({p, q+1});
                dis[p][q+1] = dis[p][q] + 1;
                vis[p][q+1] = true;
            }
        }
        if (p - 1 >= 0){
            if ((mat[p-1][q] != 'X') && (vis[p-1][q] == false)){
                que.push({p-1, q});
                dis[p-1][q] = dis[p][q] + 1;
                vis[p-1][q] = true;
            }
        }
        if (q - 1 >= 0){
            if ((mat[p][q-1] != 'X') && (vis[p][q-1] == false)){
                que.push({p, q-1});
                dis[p][q-1] = dis[p][q] + 1;
                vis[p][q-1] = true;
            }
        }
    }
    return;
}

int main(){
    int T; 
	cin>>T;
    for(int pp = 0; pp<T; pp++){
        cin>>N>>M;
        for(int i = 0; i < M; i++){
            for(int j = 0; j < N; j++){
                cin>>mat[i][j];
                if(mat[i][j] == 'C'){
                    x=i; y=j;
                }
                else if (mat[i][j] == 'W'){
                    a = i; b = j;
                }
            }
        }
        for (int i = 0; i < M; i++){
            for (int j = 0; j < N; j++){
                vis[i][j] = false;
                dis[i][j] = 0;
            }
        }
        found = false;
        check();
        if (found){
            cout << dis[a][b] << "\n";
        }
        else {
            cout << "#notworth" << "\n";
        }
    }
    return 0;
}
