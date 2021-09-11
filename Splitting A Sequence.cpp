#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int N, K, a[100002]; ll ans, lo, hi;
bool check(ll x){
    int cnt = 1; ll sum = 0;
    for(int i=0; i<N; i++){
        if(sum + a[i] > x){ cnt++; sum = a[i]; }
        else sum += a[i];
    }
    return cnt <= K;
}
int main(){
    cin>>N>>K;
    for(int i=0; i<N; i++){
        cin>>a[i]; hi += a[i];  lo = max(lo, (ll)a[i]);
    }
    while(lo <= hi){
        ll mid = (lo + hi)/2;
        if(check(mid)){ ans = mid; hi = mid-1;}
        else lo = mid+1;
    }
    cout<<ans<<endl;
}
