#include <bits/stdc++.h>
using namespace std;

int X,Y,G;
pair<string,string>arrX[100001], arrY[100001];
map<string, int> mp;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
    
    cin>>X;
    for(int i=0; i<X; i++){
    	string a,b;
    	cin>>a>>b;
    	arrX[i] = {a,b};
	}
	cin>>Y;
    for(int i=0; i<Y; i++){
    	string a,b;
    	cin>>a>>b;
    	arrY[i] = {a,b};
	}
	cin>>G;
	for(int i=1; i<=G; i++){
		string a,b,c;
		cin>>a>>b>>c;
		mp[a] = i;
		mp[b] = i;
		mp[c] = i;
	}
	int ans = 0;
	for(int i=0; i<X; i++){
		string a = arrX[i].first, b = arrX[i].second;
		if(mp[a] != mp[b]){
			ans++;
		}
	}
	for(int i=0; i<Y; i++){
		string a = arrY[i].first, b = arrY[i].second;
		if(mp[a] == mp[b]){
			ans++;
		}
	}
    cout<<ans<<endl;

    return 0;
}
