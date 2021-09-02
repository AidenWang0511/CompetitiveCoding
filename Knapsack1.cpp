#include <bits/stdc++.h>
using namespace std;
int N,W,v,w;
long long dp[100001];

int main(){
  cin>>N>>W;
  while(N--){
    cin>>w>>v;
    for(int i=W;i>=w;i--)dp[i]=max(dp[i],dp[i-w]+v);
  }

  cout<<dp[W]<<endl;
}