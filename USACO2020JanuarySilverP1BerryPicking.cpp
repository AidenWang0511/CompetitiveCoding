#include<bits/stdc++.h>
using namespace std;
 
int N,K;
int arr[1001];
int r[1001];

 
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

	freopen("berries.in","r",stdin);
	freopen("berries.out","w",stdout);

	cin>>N>>K;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int ans=0;
    sort(arr, arr+N);
    int st = arr[0], ed = arr[N-1];
    for(int i=st; i<=ed; i++){
        int cnt = 0;
        for(int j=0; j<N; j++){
            cnt += arr[j]/i;
            r[j] = arr[j]%i;
        }
        sort(r, r+N, greater<int>());
        if(cnt >= K){
            ans = max(ans, K/2 * i);
        }else if(cnt >= K/2){
            int temp = cnt - K/2;
            temp *= i;
            for(int j=0; j<min(N,K-cnt); j++){
                temp += r[j];
            }
            ans = max(ans, temp);
        }
    }

    cout<<ans<<endl;

}