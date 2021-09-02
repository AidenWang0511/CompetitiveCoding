#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pl;
const int MM = 4e5 + 5;
int n;
ll h[MM], ans;
stack<pl> stk;
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>h[i];
        while(!stk.empty() && stk.top().first < h[i]){
            ans += stk.top().second;
            stk.pop();
        }
        if(!stk.empty() && stk.top().first == h[i]){
            ans+= stk.top().second;
            stk.top().second++;
            if(stk.size()>1) ans++;
        }else{
            if(!stk.empty()) ans++;
            stk.push({h[i],1});
        }
    }
    cout<<ans<<endl;
    return 0;
}