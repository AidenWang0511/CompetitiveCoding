#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    string str;
	int h1, m1, s1;
	int h2, m2, s2;
	int ans;
	cin>>str;
	h1 = stoi(str.substr(0,2));
	m1 = stoi(str.substr(3,2));
	s1 = stoi(str.substr(6,2));
	cin>>str;
	h2 = stoi(str.substr(0,2));
	m2 = stoi(str.substr(3,2));
	s2 = stoi(str.substr(6,2));
	ans = (h2-h1)*60*60 + (m2-m1)*60 + s2-s1;
	if (ans <= 0) ans += 24*60*60;
	printf( "%02d:%02d:%02d\n", ans/60/60, ans/60%60, ans%60 );	
	return 0;
}

