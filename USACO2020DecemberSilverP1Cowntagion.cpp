#include<bits/stdc++.h>
using namespace std;

int N;
vector<int> adj[100001];
bool vis[100001];

int pow2(int num){
    int counter = 1;
    int days = 0;
    while(counter<num){
        counter*=2;
        days++;
    }
    return days;
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
	cin>>N;

	for(int i=0;i<N-1;i++){
        int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
        adj[b].push_back(a);
	}
	
    queue<int> q;
    q.push(1);
    int ans=0;
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        if(vis[cur]) continue;
        vis[cur]=true;

        if(!adj[cur].empty()){
            int days = 1;
            for(int x:adj[cur]){
                if(!vis[x]){
                    q.push(x);
                    days++;
                    ans++;
                }
            }
            days = pow2(days);
            ans+=days;
        }
    }
    cout<<ans<<endl;
    return 0;
}
