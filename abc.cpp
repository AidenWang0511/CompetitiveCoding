#include<bits/stdc++.h>
using namespace std;

//typedef pair<int, pair<int, int>> pii; //adj, x, y
const int MAXN = 2002;
const int z = 1000;
int cow[MAXN][MAXN];
bool vis[MAXN][MAXN];
//priority_queue<int> pos;
int N;

void addAdj(int x, int y){
    cow[x-1][y]++;
    cow[x+1][y]++;
    cow[x][y-1]++;
    cow[x][y+1]++;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    /*
    cin>>N;
    for(int i=1,x,y; i<=N; i++){
        cin>>x>>y;
        x = x+z; y = y+z;
        pos.push({x,y});
        vis[x][y] = true;
        addAdj(x,y);
    }    
    
   for(int i=9; i>0; i--){
       pos.push(i);
   }
   while(!pos.empty()){
       cout<<pos.top()<<' ';
       pos.pop();
   }
*/
    return 0;
}