#include <bits/stdc++.h>
using namespace std;
int p[1000001];
unordered_map <string, int> mp;

int find(int x) {
    if (p[x] != x){
        p[x] = find(p[x]);
    }
    return p[x];
}

void link(int x, int y){
    if(x<=y){
        p[y] = x;
    }else{
        p[x] = y;
    }
    
}

void connect(int x, int y){
    link(find(x), find(y));
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    char x;
	string a,b;
    int N,c=1; 
    for(int t=0; t<5; t++){
    	cin>>N;
    	memset(p, 0, sizeof(p)); c=1;
    	for(int i=1; i<=N; i++){
    		cin>>x>>a>>b;
    		if(!mp.count(a)){
    			p[c] = c;
    			mp[a] = c;
    			c++;
			}
    		if(!mp.count(b)){
    			p[c] = c;
    			mp[b] = c;
    			c++;
			}
    		if(x == 'p'){
    			connect(mp[a], mp[b]);
			}else{
				if(find(mp[a]) == find(mp[b])){
					cout<<"connected"<<endl;
				}else{
					cout<<"not connected"<<endl;
				}
			}
		}
		mp.clear();
	}
    
    return 0;
}
