#include<bits/stdc++.h>
using namespace std;

int N;
vector<int> adj[100005];

int main(){
    freopen("planting.in","r",stdin); 
	freopen("planting.out","w",stdout); 

    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>N;
    for(int i=0; i<N-1; i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int maxN = 0;

    for(int i=1; i<=N; i++){
        if(adj[i].size() > maxN){
            maxN = adj[i].size();
        }
    }

    cout<<maxN+1<<endl;

    return 0;
}
