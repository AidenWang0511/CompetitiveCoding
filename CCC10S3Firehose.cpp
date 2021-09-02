#include<bits/stdc++.h>
using namespace std;

int n,pos[1002],len = 1e6,ans,h;

bool check(int x){
    int d = 2*x, mi = n;
    for(int st=0; st<n && pos[st] <= pos[0] + d; st++){
        int cnt = 1, far = pos[st];
        for(int nxt = st+1; nxt<n && pos[nxt]+d-len < pos[st]; nxt++){
            if(pos[nxt] > far){
                far = pos[nxt] + d;
                cnt++;
            }
        }
        mi = min(mi, cnt);
    }
    return mi <= h;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>pos[i];
    }
    cin>>h;
    sort(pos, pos+n);
    int lo = 0, hi = len;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(check(mid)){
            ans = mid;
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }

    cout<<ans<<endl;
    
    return 0;
}