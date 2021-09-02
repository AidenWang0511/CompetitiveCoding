#include<bits/stdc++.h>
using namespace std;
long long p[1000001],sz[1000001],val[1000001], N,Q,a,b,c;

int findLead (int v){
    if(p[v] == v){
        return v;
    }
    p[v] = findLead(p[v]);
    return p[v];
}

 int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>N>>Q;
    fill(sz,sz+N+1,1);
    for(int i=1; i<=N; i++){
        cin>>val[i];
        p[i] = i;
    }
    for(int i=0; i<Q; i++){
        cin>>c;
        if(c == 1){
            cin>>a>>b;
            int a1 = findLead(a);
            int b1 = findLead(b);
            if(a1!=b1){
                p[b1] = a1;
                sz[a1] += sz[b1];
                val[a1] += val[b1];
            }
        }else if(c == 2){
            cin>>a;
            int lead = findLead(a);
            cout<<sz[lead]<<"\n";
        }else{
            cin>>a;
            int lead = findLead(a);
            cout<<val[lead]<<"\n";
        }
    }
    return 0;
}