#include <bits/stdc++.h>
using namespace std;

pair<int,int> start;
pair<int,int> finish;
pair<int,int> current;
queue<pair<int,int>> q;

int dis[401][401];
int steps[8][2]={{-2, 1}, {-2, -1}, {-1, 2}, {-1, -2}, {1, 2}, {1, -2}, {2, -1}, {2, 1}};
int newRow,newColumn;


int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    memset(dis, -1, sizeof(dis));
    cin >> finish.first >> finish.second >> start.first >> start.second;
    q.push(start);
    dis[start.first][start.second] = 0;
    while(!q.empty()){
        current = q.front();
        q.pop();
        for(int i=0; i<8; i++){
            newRow = current.first + steps[i][0];
            newColumn = current.second + steps[i][1];
            if(newRow>=1 && newRow<=finish.first && newColumn>=1 && newColumn<=finish.second && dis[newRow][newColumn] == -1){
                q.push({newRow,newColumn});
                dis[newRow][newColumn] = dis[current.first][current.second] + 1;
            }
        }
    }
    for(int i=1; i<=finish.first; i++){
        for(int j=1; j<=finish.second; j++){
            cout<<left<<setw(5)<<dis[i][j];
        }
        cout<<"\n";
    }
    return 0;
    

}