#include <bits/stdc++.h>
using namespace std;

pair<int,int> start;
pair<int,int> finish;
pair<int,int> current;
queue<pair<int,int>> q;
int dis[10][10];
bool vis[10][10];
int steps[8][2]={{-2, 1}, {-2, -1}, {-1, 2}, {-1, -2}, {1, 2}, {1, -2}, {2, -1}, {2, 1}};
int newRow,newColumn;


int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> start.first >> start.second >> finish.first >> finish.second;
    q.push(start);
    vis[start.first][start.second] = true;
    dis[start.first][start.second] = 0;
    while(!q.empty()){
        current = q.front();
        q.pop();
        for(int i=0; i<8; i++){
            newRow = current.first + steps[i][0];
            newColumn = current.second + steps[i][1];
            if(newRow>=1 && newRow<=8 && newColumn>=1 && newColumn<=8 && !vis[newRow][newColumn]){
                q.push({newRow,newColumn});
                vis[newRow][newColumn] = true;
                dis[newRow][newColumn] = dis[current.first][current.second] + 1;
            }
        }
    }
    cout<<dis[finish.first][finish.second];
    return 0;
}

