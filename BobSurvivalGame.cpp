#include<bits/stdc++.h>
using namespace std;

int N,M,T,arr[100002];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>N>>T>>M;
    for(int i=0; i<M; i++){
        int a;
        cin>>a;
        arr[a]++;
    }
    int ans = 0;
    for(int i=1; i<=N; i++){
        if(arr[i]+T-M > 0){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}