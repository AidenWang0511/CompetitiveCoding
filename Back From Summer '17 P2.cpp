#include <bits/stdc++.h>
using namespace std;
int N, maxx;
string s;
map<string, int> msi;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> s;
		msi[s]++;
	}
	for (auto i : msi) maxx = max(maxx, i.second);
	int R = N - maxx, res = min(maxx, R + 1) + R;
	cout << res << "\n";
	return 0;
}
