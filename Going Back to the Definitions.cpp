#include <bits/stdc++.h>
using namespace std;

int N;
string seq;
vector<string> v;

inline int cmp (string a, string b) {
	return a + b > b + a;
}

int main (int argc, char const *argv[]) {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	while (N--) {
		cin >> seq;
		v.push_back(seq);
	}
	sort(v.begin(), v.end(), cmp);
	for (auto i : v) cout << i;
	return 0;
}
