#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    int arrP[1001] = {0}, arrX[1001] = {0}, arrY[1001] = {0};
    int N;
    cin>>N;
    for(int i=2; i<=N; i++){
    	cin>>arrP[i]>>arrX[i]>>arrY[i];
    	if(arrP[i] != 1){
    		arrX[i] = arrX[arrP[i]] + arrX[i];
    		arrY[i] = arrY[arrP[i]] + arrY[i];
		}
	}
	set<pair<int,int>> mySet;
	mySet.insert({0,0});
	for(int i=2; i<=N; i++){
		mySet.insert({arrX[i],arrY[i]});
	}
	int ans = mySet.size();
	cout<<ans<<endl;
    
    
    return 0;
}
