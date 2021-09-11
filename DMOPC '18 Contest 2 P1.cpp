#include <bits/stdc++.h>
using namespace std;

int main(){
	int p,minX=10000000,maxX=-10000000,minY=10000000,maxY=-10000000,ans;
	cin>>p;
	for(int i=0; i<p; i++){
		int x,y;
		cin>>x>>y;
		minX = min(minX,x);
		minY = min(minY,y);
		maxX = max(maxX,x);
		maxY = max(maxY,y);
	}
	ans = (maxX-minX + maxY-minY)*2;
	cout<<ans<<endl;
	return 0;
} 
