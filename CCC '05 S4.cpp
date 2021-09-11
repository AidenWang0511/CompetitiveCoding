#include <bits/stdc++.h>
using namespace std;

int L, n, depth, idx, cnt;
string recep[1000], par[1000];

int main () {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin>>L;
	while (L--) {
		cin >> n;
		for (int i=0; i<n; i++) cin >> recep[i];
		depth = 0;
		par[0] = recep[n - 1];
		idx = 0;
		for (int i=0; i<n; i++) {
			cnt = 0;
			while (cnt <= idx && par[cnt] != recep[i]) cnt++;
			par[cnt] = recep[i];
			idx = cnt;
			depth = max(depth, idx);
		}
		cout << (n * 10 - 20 * depth) << endl;
	}
	return 0;
}
