#include<bits/stdc++.h>
using namespace std;
int N,M,arr[100001],a[100001],b[100001],ans = 0;
queue<int> pos[1000001];
int main(){
    cin>>N>>M;
    for(int i=0; i<N; i++){
        cin>>arr[i];
        pos[arr[i]].push(i);
    }
    for(int i=0; i<M; i++){
        cin>>a[i]>>b[i];
        if(pos[a[i]].empty() || pos[b[i]].empty() || pos[a[i]].front() > pos[b[i]].front()){
            ans = 0;
        }else{
            ans = max(ans, pos[b[i]].front() - pos[a[i]].front() + 1);
        }
    }
    cout<<ans<<endl;
}
