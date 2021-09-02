#include<bits/stdc++.h>
using namespace std;

int N,arr[100002], ans[100002];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>N;
    for(int i=1; i<=N; i++){
        cin>>arr[i];
        if(arr[i]<=arr[i-1]){
            ans[i] = ans[i-1] + 1; 
        }else{
            ans[i] = 0;
        }
    }
    sort(ans, ans+N+1);
    cout<<ans[N]+1<<endl;
    
    return 0;
}