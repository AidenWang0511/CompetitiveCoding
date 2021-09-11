#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    vector<double> v;
    double H, T, M, t, g=0, maxG=0, maxT=0;
    string str;
    cin>>H;
    cin>>T;
    for(int i=0; i<T; i++){
    	cin>>t;
    	v.push_back(t);
	}
	cin>>M;
	cin>>str;
	for(int i=0; i<M; i++){
		if(str[i] == '0' || str[i] == 'X'){
			g++;
			maxG = max(maxG, g);
		}else{
			g=0;
		}
	}
	for(int i=0; i<v.size(); i++){
		if(v[i]<=maxG){
			maxT=max(v[i], maxT);
		}
	}
	int ans = ceil(H/maxT);
	cout<<ans<<endl;
	return 0;
}

