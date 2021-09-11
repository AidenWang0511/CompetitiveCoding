#include <bits/stdc++.h>
using namespace std;
int main(){
	char c;
	vector<int> a,b;
	while(cin >> c){
		b.push_back(c - '0');
	}
	a = b;
	next_permutation(a.begin(),a.end());
	if(a > b){
		for(int x : a) cout << x;
		cout << endl;
	}
	else{
		cout << 0 << endl;
	}
	return 0;
}
