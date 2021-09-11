#include <bits/stdc++.h>
using namespace std;

int T = 0, p[200002];
int Find(int d){ return d == p[d]? p[d]: p[d] = Find(p[d]);}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    for(int k=0; k<5; k++){
        int n = 0, tot = 0; string op, s1, s2; unordered_map<string, int> mp;
        cin >> n;
        for(int i=0; i<=2*n; i++) p[i] = i;
        for(int i=1; i<=n; i++){
            cin >> op >> s1 >> s2;
            if(!mp.count(s1)) mp[s1] = tot++;
            if(!mp.count(s2)) mp[s2] = tot++;
            int fu = Find(mp[s1]), fv = Find(mp[s2]);
            if(op == "p"){
                if(fu != fv) p[fu] = fv;
            }else{
                if(fu == fv) cout<<"connected"<<endl;
                else cout<<"not connected"<<endl;
            }
        }
    }
}
