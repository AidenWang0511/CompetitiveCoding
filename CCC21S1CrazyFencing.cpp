#include<bits/stdc++.h>
using namespace std;

const int MAXN = 10003;
long double h[MAXN], w[MAXN], ans = 0; 
int N;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    
    cin>>N;
    for(int i=0; i<=N; i++){
        cin>>h[i];
    }
    for(int i=0; i<N; i++){
        cin>>w[i];
        ans += (long double)((h[i] + h[i+1]) * w[i] / (long double)2);
    }
    cout<<fixed<<ans<<endl;


    return 0;
}