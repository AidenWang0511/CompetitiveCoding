#include <bits/stdc++.h>
using namespace std;

int N,M;
long long l[10005], r[10005], ans[10005];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>N>>M;
    for(int i=0; i<N; i++){
        int a,b;
        cin>>a>>b;
        l[a]++;
        r[b]++;
    }
    for(int i=0; i<=M; i++){
        for(int j=0; j<=M; j++){
            ans[i+j] += l[i]*l[j];
            ans[i+j+1] -= r[i]*r[j];
        }
    }
    for(int i=1; i<=2*M; i++){
        ans[i] += ans[i-1];
    }
    for(int i=0; i<=2*M; i++){
        cout<<ans[i]<<"\n";
    }

    return 0;
}