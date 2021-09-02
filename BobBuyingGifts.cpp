#include<bits/stdc++.h>
using namespace std;

priority_queue<pair<int, int>> pq;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    int N, T;
    cin>>N>>T;
    for(int i=0; i<N; i++){
        int c,v;
        cin>>c>>v;
        if(c<=T){
            pq.push({v,c});
        }
    }
    cout<<pq.top().first<<endl;
    return 0;
}