#include<bits/stdc++.h>
using namespace std;

long long T,S,N;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>T;
    while(T--){
        cin>>N>>S;
        long long sum = (1+N)*N/2;
        long long diff = sum-S;
        if(diff > N){
            long long ans = diff-N;
            ans = (N-ans+1)/2;
            cout<<ans<<endl;
        }else{
            if(diff % 2 == 0){
                cout<<diff/2-1<<endl;
            }else{
                cout<<diff/2<<endl;
            }
        }
    }
    return 0;
}