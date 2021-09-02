#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
ull N,M,K;
unordered_map<ull,ull> r,c;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>N>>M>>K;
    while(K--){
        ull a,b;
        cin>>a>>b;
        if(r.count(a))  r[a] = r.find(a)->second+1;
        else r[a] = 1;
        if(r.find(a)->second == 2){
            r.erase(a);
        }

        if(c.count(b))  c[b] = c.find(b)->second+1;
        else c[b] = 1;
        if(c.find(b)->second == 2){
            c.erase(b);
        }
    }
    ull ans,counter;
    if(r.size()>c.size()){
        ans = r.size();
        counter = c.size();
        cout<<ans<<endl;
        ull i=1;
        while(ans--){
            if(i<=counter){
                for(auto x:r){
                    cout<<x.first<<' ';
                    r.erase(x.first);
                    break;
                }
                for(auto x:c){
                    cout<<x.first<<endl;
                    c.erase(x.first);
                    break;
                }
                i++;
            }else{
                for(auto x:r){
                    cout<<x.first<<' ';
                    r.erase(x.first);
                    break;
                }
                cout<<1<<endl;
            }
        }
    }else{
        ans = c.size();
        counter = r.size();
        cout<<ans<<endl;
        ull i=1;
        while(ans--){
            if(i<=counter){
                for(auto x:r){
                    cout<<x.first<<' ';
                    r.erase(x.first);
                    break;
                }
                for(auto x:c){
                    cout<<x.first<<endl;
                    c.erase(x.first);
                    break;
                }
                i++;
            }else{
                cout<<1<<' ';
                for(auto x:c){
                    cout<<x.first<<endl;
                    c.erase(x.first);
                    break;
                }
            }
        }
    }
    
    return 0;
}