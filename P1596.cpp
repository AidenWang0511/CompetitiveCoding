#include<bits/stdc++.h>
using namespace std;

int n,m,steps[8][2] = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,1},{-1,-1},{1,-1}};
bool arr[101][101];

void dfs(int x, int y){
    if(!arr[x][y]){
        return;
    }
    arr[x][y] = false;
    for(int i=0; i<8; i++){
        int nx = x + steps[i][0];
        int ny = y + steps[i][1];
        if(nx < 0 || nx>n-1 || ny<0 || ny>m-1){
            continue;
        }
        dfs(nx, ny);
    }
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        for(int j=0; j<m; j++){
            if(a[j] == '.'){
                arr[i][j] = false;
            }else{
                arr[i][j] = true;
            }
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]){
                dfs(i,j);
                ans++;
            }
        }
    }
    cout<<ans<<endl;


    return 0;
}
