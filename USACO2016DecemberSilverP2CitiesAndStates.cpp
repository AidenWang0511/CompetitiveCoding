#include<bits/stdc++.h>
using namespace std;

int N;
map<string, int>m;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    // freopen("citystate.in","r",stdin);
	// freopen("citystate.out","w",stdout);

    cin>>N; 
    for(int i=0; i<N; i++){
        string s,a,b;
        cin>>a>>b;
        a = a.substr(0, 2);
        s = a+b;
        m[s]++;
    }
    int ans = 0;
    
    map<string, int>::iterator it = m.begin();
    for(it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
        string s = it->first;
        string a = s.substr(0,2);
        string b = s.substr(2,2);
        string s2 = b+a;
        if(m.count(s2) > 0){
            ans += m[s] * m[s2];
            m[s] = 0;
            m[s2] = 0;
        }
    }
    cout<<ans<<endl;

    return 0;
}
