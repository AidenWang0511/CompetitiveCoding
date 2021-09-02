#include<bits/stdc++.h>
using namespace std;

const int MM = 1000001;
int n, m, a[MM], v[MM], s[MM], t[MM],dif[MM+1];

bool check(int k){
    memset(dif, 0, sizeof(dif));
    for(int i=1; i<=k; i++){
        dif[s[i]] += v[i];
        dif[t[i]+1] -= v[i];
    }
    for(int i=1; i<=n; i++){
        dif[i] += dif[i-1];
        if(dif[i] > a[i]) return false;
    }
    return true;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=m; i++){
        cin>>v[i]>>s[i]>>t[i];
    }
    int lo=1, hi=m, ans = 0;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(check(mid)){
            ans = mid;
            lo = mid+1;
        }else{
            hi = mid-1;
        }
    }
    if(ans==m) cout<<0<<endl;
    else{
        cout<<-1<<endl;
        cout<<ans+1<<endl;
    }

    return 0;
}