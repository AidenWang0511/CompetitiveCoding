#include<bits/stdc++.h>
using namespace std;

const int MM = 2e5+5;
struct event {int x, y, tp;};
int N,M,y[MM],bit[2*MM],cnt;
map<int,int> mp;
vector<event> vec;
long long ans;

bool cmp(event a, event b){ 
    return a.x < b.x || (a.x==b.x && a.tp < b.tp);
}

void update(int pos, int val){
    for(int i=pos; i<=cnt; i+=i&-i) bit[i] += val;
}

int query(int pos){
    int sum = 0;
    for(int i=pos; i>0; i-=i&-i) sum+=bit[i];
    return sum;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>N>>M;
    for(int i=1, a, b; i<=N; i++){
        cin>>a>>b;
        y[i] = b;
        mp[b] = 0;
        vec.push_back({a,b,1});
    }
    for(int i=1, a, b; i<=M; i++){
        cin>>a>>b;
        mp[b] = 0;
        vec.push_back({a,b,0});
    }
    for(auto &e: mp) e.second = ++cnt;
    for(int i=1; i<=N; i++){
        update(mp[y[i]], 1);
    }
    sort(vec.begin(), vec.end(), cmp);
    for(event &e :vec){
        if(e.tp == 0) ans += query(mp[e.y]);
        else update(mp[e.y],-1);
    }
    cout<<ans<<endl;

    return 0;
}