#include<bits/stdc++.h>
using namespace std;

int main(){
	int r, s;
	cin >> r >> s;
	vector<string> v;
	for (int i = 0; i < r; i++){
		string a;
		cin >> a;
		v.push_back(a);
	}

	map<int, int> place;
	int t = 1;

	for (int i = s - 2; i >= 1; i--){
		int x = 0;
		for (int j = 0; j < r; j++){
			if ( isdigit(v[j][i]) && !isdigit(v[j][i + 1]) ){
				place[v[j][i]] = t;
				x = 1;
			}
        }
		t += x;
	}

	for (int i = '1'; i <= '9'; i++)    cout << place[i] << endl;
	return 0;
}