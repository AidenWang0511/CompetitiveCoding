#include <bits/stdc++.h>
using namespace std;
int N,M,arr[1000001],a,b,ans = 0;
vector<int> pos[1000001];
int main(){
    cin>>N>>M;
    for(int i=0; i<N; i++){
        cin>>arr[i];
        pos[arr[i]].push_back(i);
    }
    for(int i=0; i<M; i++){
        cin>>a>>b;
        if(pos[a].empty() || pos[b].empty() || pos[a].front() > pos[b].back()){

        }else{
            ans = max(ans, pos[b].back() - pos[a].front() + 1);
        }
    }
    cout<<ans<<endl;
}