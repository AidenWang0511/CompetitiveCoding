#include<bits/stdc++.h>
using namespace std;

int N, A[100002],B[100002];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>N;
    for(int i=1; i<=N-1; i++){
        cin>>B[i];
    }
    long long ans = B[1]+B[N-1];
    for(int i=N-1; i>1; i--){
        ans += min(B[i-1], B[i]);
    }
    cout<<ans<<endl;
    return 0;
}