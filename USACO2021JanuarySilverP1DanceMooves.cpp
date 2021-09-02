#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100002;
int N,K,pos[MAXN], ans[MAXN], p[MAXN];
bool vis[MAXN];
set<int> arr[MAXN];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>N>>K;
    for(int i=1; i<=N; i++){
        pos[i] = i;
        p[i] = i;
        arr[i].insert(i);
    }
    for(int i=0; i<K; i++){
        int L,R,temp;
        cin>>L>>R;
        temp = pos[L];
        pos[L] = pos[R];
        pos[R] = temp;
        arr[pos[L]].insert(L);
        arr[pos[R]].insert(R);
    }
    for(int i=1; i<=N; i++){
        int cur = i;
        if(vis[i]) continue;
        if(pos[cur] == i){
            ans[cur] = arr[cur].size();
            vis[cur] = true;
            continue;
        }
        while(pos[cur] != i){
            arr[i].insert(arr[cur].begin(), arr[cur].end());
            vis[cur] = true;
            p[pos[cur]] = i;
            cur = pos[cur];
        }
        arr[i].insert(arr[cur].begin(), arr[cur].end());
        vis[cur] = true;
        ans[i] = arr[i].size();
    }
    for(int i=1; i<=N; i++){
        cout<<ans[p[i]]<<"\n";
    }
    
    return 0;
}