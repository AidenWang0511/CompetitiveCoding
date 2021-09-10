#include<bits/stdc++.h>
using namespace std;

int n,s,a,b;
priority_queue<int, vector<int>, greater<int>> pq;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>n>>s>>a>>b;
    int sum = a+b;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        if(x<=sum){
            pq.push(y);
        }
    }
    int ans=0;
    while(s>0){
        s -= pq.top();
        pq.pop();
        if(s<0) break;
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}
