#include <bits/stdc++.h>
using namespace std;
 
int N, arr[100000];

int findMin(){
  if(arr[N-2] - arr[0] == N-2 && arr[N-1]-arr[N-2] > 2){
    return 2;
  }
  if(arr[N-1] - arr[1] == N-2 && arr[1]-arr[0] > 2){
    return 2;
  }
  int ans = 0;
  for(int i=0; i<N; i++){
    
  }
}

int main(){
  cin.sync_with_stdio(0);
  cin.tie(0);

  // freopen("herding.in","r",stdin); 
	// freopen("herding.out","w",stdout); 
  cin>>N;
  for(int i=0;i<N;i++){
    cin>>arr[i];
  }
  sort(arr,arr+N);
  int minAns = findMin();
  int maxAns = max(arr[N-2]-arr[0], arr[N-1]-arr[1]) - (N-2);
  return 0;
}