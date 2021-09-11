#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,friends[10000],x,y;
	
	memset(friends, -1, sizeof friends);
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x>>y;
		friends[x] = y;
	}
	while(true){
		bool vis[10000], cycle=false;
		memset(vis, false, sizeof vis);
		int dist = -1;
		cin>>x>>y;
		if(x==0 && y==0){
			break;
		}
		while(true){
			vis[x] = true;
			x = friends[x];
			dist++;
			if(x == -1 || vis[x]){
				break;
			}
			if(x==y){
				cycle = true;
				break;
			}
			
		}
		if(cycle){
			cout<<"Yes "<<dist<<endl;
		}else{
			cout<<"No"<<endl;
		}
		
	}
	return 0;
} 
