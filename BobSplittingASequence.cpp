#include<bits/stdc++.h>
using namespace std;
const int MAXN = 100002;
long long N, L=1, R=2, maxV, ans = INT_MAX, psa[MAXN];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>N;
    for(int i=1; i<=N; i++){
        cin>>psa[i];
        psa[i] += psa[i-1];
    }

    for(; R<=N;){
        long long a = psa[L], b = psa[R] - psa[L], c = psa[N] - psa[R];
        maxV = max(a, max(b,c));
        ans = min(maxV - min(a, min(b,c)), ans);
        if(maxV == c)   R++;
        else if(maxV == b)  L++;
        else R++;
    }

    cout<<ans<<endl;


    return 0;
}