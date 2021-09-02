#include<bits/stdc++.h>
using namespace std;

const int MAXN = 5000002;
int r[MAXN], c[MAXN], M,N,K,ans=0;


int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>M>>N>>K;
    for(int i=0; i<K; i++){
        char a; int b;
        cin>>a>>b;
        if(a == 'R'){
            r[b]++;
        }else{
            c[b]++;
        }
    }
    for(int i=1; i<=M; i++){
        for(int j=1; j<=N; j++){
            if((r[i]+c[j]) % 2 == 1){
                ans++;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}