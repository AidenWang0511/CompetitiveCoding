#include <bits/stdc++.h>
using namespace std;

int T, N, M, f[100005];
vector<int> st,ed;
vector<int> v[100005];

int find(int x){
    if(x == f[x]){
        return x;
    }
    return find(f[x]);
}

void merge(int a, int b){
    int u = find(a);
    int v = find(b);
    if(u != v){
        f[u] = v;
    }
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>T;
    for(int t=0; t<T; t++){
        cin>>N>>M;
        for(int i=1; i<=N; i++){
            f[i] = i;
        }
        for(int i=1; i<=M; i++){
            int a,b;
            cin>>a>>b;
            merge(a,b);
        }
        for(int i=1; i<=N; i++){
            v[i].clear();
        }
        for(int i = 1; i<=N; i++){
            v[find(i)].push_back(i);
        }
        int b1 = find(1), b2 = find(N);
        if(b1 == b2){ 
            cout<<0<<"\n";  
            continue; 
        }
        st.clear(); ed.clear();
        for(int i=0; i<v[b1].size(); i++){
            st.push_back(v[b1][i]);
        }
        for(int i=0; i<v[b2].size(); i++){
            ed.push_back(v[b2][i]);
        }
        long long ans = LLONG_MAX;
        for(int i=2; i<N; i++){
            if(find(i) == i){
                int dis1 = N, dis2 = N;
                for(int j=0; j<v[i].size(); j++){
                    int position = lower_bound(st.begin(), st.end(), v[i][j]) - st.begin();
                    if(position != st.size()){
                        dis1 = min(dis1, st[position] - v[i][j]);
                    }
                    if(position != 0){
                        dis1 = min(dis1, v[i][j] - st[position-1]);
                    }
                    position = lower_bound(ed.begin(), ed.end(), v[i][j]) - ed.begin();
                    if(position != ed.size()){
                        dis2 = min(dis2, ed[position] - v[i][j]);
                    }
                    if(position != 0){
                        dis2 = min(dis2, v[i][j] - ed[position-1]);
                    }
                }
                ans = min(ans, (long long)(dis1)*(long long)(dis1) + (long long)(dis2)*(long long)(dis2));
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}