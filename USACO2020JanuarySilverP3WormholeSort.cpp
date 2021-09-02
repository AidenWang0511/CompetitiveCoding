#include <bits/stdc++.h>
using namespace std;

int n,m,p[100002],a[100002];
vector<pair<int,pair<int,int>>> e;

bool cmp(pair<int,pair<int,int>> c, pair<int,pair<int,int>> b){
    return c.first > b.first;
}

int find(int d){
    if(d != p[d]) p[d] = find(p[d]);
    return p[d];
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i=1; i<=n; i++){
        p[i] = i;
        cin>>a[i];
    }
    for(int i=1; i<=m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        e.push_back({w,{u,v}});
    }
    sort(e.begin(), e.end(), cmp);
    int ans = -1;
    for(int i=1, j=0; i<=n; i++){
        for(; find(a[i]) != find(i); j++){
            int u = e[j].second.first, v = e[j].second.second, w = e[j].first;
            int fu = find(u), fv = find(v);
            if(fu != fv){
                p[fu] = fv; 
                ans = w;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}