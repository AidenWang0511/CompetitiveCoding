#include<bits/stdc++.h>
using namespace std;

const int MM = 2e5+2;
typedef long long ll;
int N, h[MM], a[MM];
ll dp[MM], bit[MM], ans;

void update(int pos, ll val){
    for(int i=pos; i<=N; i+=i&-i){
        bit[i] = max(bit[i], val);
    }
}

ll query(int pos){
    ll ret = 0;
    for(int i=pos; i>0; i-=i&-i){
        ret = max(ret, bit[i]);
    }
    return ret;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>N; 
    for(int i=1; i<=N; i++) cin>>h[i];
    for(int i=1; i<=N; i++){
        cin>>a[i];
        dp[i] = query(h[i]) + a[i];
        update(h[i], dp[i]);
        ans = max(ans, dp[i]);
    }
    cout<<ans<<endl;
    return 0;
}