#include<bits/stdc++.h>
using namespace std;

void warshalls (bool vis[26][26]){
	for (int y = 0 ; y < 26 ; y++){
		for (int x = 0 ; x < 26 ; x++){
			if (vis[x][y]){
				for (int j = 0 ; j < 26 ; j++){
					if (vis[y][j])
			    	vis[x][j] = true;
				}
			}
		}
	}	
}

int main(){
	bool adj[26][26];
	string roads[1000];
	string s;
	int a,b,n=0,count=0;
	while(true){
		cin>>s;
		if(s=="**") break;
		roads[n++] = s;
	}
	for(int i=0; i<n; i++){
		memset(adj, false, sizeof adj);
		for(int k=0; k<26; k++){
			adj[k][k] = true;
		}
		for(int j=0; j<n; j++){
			if(j!=i){
				a=roads[j][0] - 'A';
				b=roads[j][1] - 'A';
				adj[a][b] = true;
		    	adj[b][a] = true;
			}
		}
		warshalls(adj);
		if(!adj[0][1]){
			cout<<roads[i]<<endl;
			count++;
		}
	}
	cout<<"There are "<<count<<" disconnecting roads."<<endl;
	return 0;
}	




