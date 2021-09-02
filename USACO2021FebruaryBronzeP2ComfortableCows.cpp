#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2002;
const int z = 1000;
int arr[MAXN][MAXN], N;
bool vis[MAXN][MAXN];
vector<pair<int,int>> v;
int addComf(int x, int y, int ans){
    if(arr[x][y+1] == 3 && vis[x][y+1])  ans--;
    if(arr[x][y-1] == 3 && vis[x][y-1])  ans--;
    if(arr[x+1][y] == 3 && vis[x+1][y])  ans--;
    if(arr[x-1][y] == 3 && vis[x-1][y])  ans--;
    arr[x][y+1]++;
    arr[x][y-1]++;
    arr[x+1][y]++;
    arr[x-1][y]++;
    if(arr[x][y] == 3)  ans++;
    if(arr[x][y+1] == 3 && vis[x][y+1])  ans++;
    if(arr[x][y-1] == 3 && vis[x][y-1])  ans++;
    if(arr[x+1][y] == 3 && vis[x+1][y])  ans++;
    if(arr[x-1][y] == 3 && vis[x-1][y])  ans++;
    return ans;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>N;
    int ans = 0;
    for(int i=0,a,b; i<N; i++){
        cin>>a>>b;
        a+=z;
        b+=z;
        vis[a][b] = true;
        ans = addComf(a,b,ans);
        if(i<3){
            cout<<0<<endl;
        }else{
            cout<<ans<<endl;
        }
    }
    return 0;
}