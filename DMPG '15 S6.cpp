#include<bits/stdc++.h>
using namespace std;
const int MM = 502;
int N,M, cnt[MM];
typedef pair<int,double>pid;
vector<pid> adj[MM];
double dis[MM], eps = 1e-8, val;
bool inq[MM];
unordered_map<string, int> mp;
string s1, s2;

int main(){
	cin>>N>>M;
	for(int i=1; i<=N; i++){
		cin>>s1;
		mp[s1] = i;
		dis[i] = 1e100;
	}
	for(int i=1; i<=M; i++){
		cin>>s1>>s2>>val;
		adj[mp[s1]].push_back({mp[s2], -log10(val)});
	}
	queue<int> q;
	q.push(mp["APPLES"]);
	dis[mp["APPLES"]] = 0;
	inq[mp["APPLES"]] = true;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		inq[u] = false;
		for(pid e: adj[u]){
			int v = e.first;
			double w = e.second;
			if(dis[v] - (dis[u] + w) > eps){
				dis[v] = dis[u] + w;
				if(!inq[v]){
					cnt[v]++;
					inq[v] = true;
					q.push(v);
					if(cnt[v] >= N){
						if(dis[mp["APPLES"]] < 0){
							cout<<"YA"<<endl;
						}
						return 0;
					}
				}
			}
		}
	}
	cout<<"NAW"<<endl;
	return 0;
} 
