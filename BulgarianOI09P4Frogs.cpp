#include <bits/stdc++.h>
using namespace std;

const int MM = 1e6+3;
int N, h[MM], jump[MM], ans[MM];
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>N;
    for(int i=1; i<=N; i++) cin>>h[i];
    for(int i=1; i<=N; i++) cin>>jump[i];
    for(int i=N, tp = N+1; i>=1; i--){
        while(tp != N+1 && h[tp] <= h[i]) tp++;
        h[--tp] = h[i];
        if(tp+jump[i] >=N+1) ans[i] = -1;
        else ans[i] = h[tp+jump[i]];
    }
    for(int i=1; i<=N; i++){
        cout<<ans[i]<<' ';
    }
    cout<<endl;
    return 0;
}