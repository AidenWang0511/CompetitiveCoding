#include<bits/stdc++.h>
using namespace std;
 
bool check(long long x, long long N, long long K, long long M){
    long long sum = 0;
    while(K>0){
        long long Y = (N-sum)/x;
        if(Y <= M){
            return sum + K*M >= N;
        }
        long long day = min((N-sum) % x / Y + 1, K);
        sum += Y*day;
        K -= day;
    }
    return sum >= N;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

	freopen("loan.in","r",stdin);
	freopen("loan.out","w",stdout);

    long long N,K,M;
	cin>>N>>K>>M;
    long long l=1, r=N, ans = 0;
    while(l<=r){
        long long mid = (l+r)/2;
        if(check(mid, N, K, M)){
            ans = mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }

    cout<<ans<<endl;

}