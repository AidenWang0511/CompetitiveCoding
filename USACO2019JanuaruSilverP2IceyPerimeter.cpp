#include<bits/stdc++.h>
using namespace std;

int n,p,ar,p1,ar1,steps[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
bool arr[1001][1001], vis[1001][1001];
pair<int,int> start;
pair<int,int> finish;
pair<int,int> current;
int newRow,newColumn;


void dfs(int x, int y){
    queue<pair<int,int>> q;
    start.first = x; start.second = y;
    vis[x][y] = true;
    q.push(start);
    while(!q.empty()){
        current = q.front();
        q.pop();
        ar1++;
        for(int i=0; i<4; i++){
            newRow = current.first + steps[i][0];
            newColumn = current.second + steps[i][1];
            if(newRow < 0 || newRow>n-1 || newColumn<0 || newColumn>n-1){
                p1++;
                continue;
            }
            if(!arr[newRow][newColumn]){
                p1++;
                continue;
            }
            if(!vis[newRow][newColumn]){
                q.push({newRow,newColumn});
                vis[newRow][newColumn] = true;
            }
        }
    }
}

int main(){
    freopen("perimeter.in","r",stdin);
	freopen("perimeter.out","w",stdout);

    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>n;
    for(int i=0; i<n; i++){ 
        string a;
        cin>>a;
        for(int j=0; j<n; j++){
            if(a[j] == '.'){
                arr[i][j] = false;
            }else{
                arr[i][j] = true;
            }
        }
    }

    p=0;
    ar=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]){
                p1=0; ar1=0;
                dfs(i,j);
                if(ar < ar1){
                    ar = ar1; p = p1;
                }else if(ar == ar1){
                    if(p1<p){
                        p=p1;
                    }
                }
            }
        }
    }
    cout<<ar<<' '<<p<<endl;


    return 0;
}
