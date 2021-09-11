#include<bits/stdc++.h>
using namespace std;
int indeg[1800], cnt=0;
map<string, int> myMap;
vector<string> name;
vector<int> adj[1800];

int main(){
	int m;
	cin>>m;
	for(int i=0; i<m; i++){
		string a,b;
		cin>>a>>b;
		if(myMap.count(a)<=0){
			myMap.insert({a,cnt});
			cnt++;
			name.push_back(a);
		}
		if(myMap.count(b)<=0){
			myMap.insert({b,cnt});
			cnt++;
			name.push_back(b);
		}
		adj[myMap.find(b)->second].push_back(myMap.find(a)->second);
		indeg[myMap.find(a)->second]++;
	}
	while(true) {
		int next = -1;
		for(int i=0; i<cnt; i++) {
			if(indeg[i] == 0) { next = i; indeg[i]=-1; break; }
		}
		if(next == -1) break;
		cout<<name[next]<<endl;
		for(int x: adj[next]) indeg[x]--;
	}
	return 0;
}
