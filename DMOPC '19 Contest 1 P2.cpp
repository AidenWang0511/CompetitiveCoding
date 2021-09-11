#include <bits/stdc++.h>
using namespace std;
long long l[32];
string f = "Good writing is good writing is good writing.", a = "Good writing is good ", b = " writing is good ", c = " is good writing.";

char solve (int n, long long k) {
	if (l[n] <= k) return '.';
	if (!n) return f[k];
	if (k < a.size()) return a[k];
	k -= a.size();
	if (k < l[n - 1]) return solve(n - 1, k);
	k -= l[n - 1];
	if (k < b.size()) return b[k];
	k -= b.size();
	if (k < l[n - 1]) return solve(n - 1, k);
	k -= l[n - 1];
	return c[k];
}

int main () {
	cin.sync_with_stdio(0);
	cin.tie(0);
	int q, n;
	long long k;
	l[0] = f.size();
	for (int i=1; i<32; i++) l[i] = a.size() + b.size() + c.size() + 2 * l[i - 1];
	cin >> q;
	while (q--) {
		cin >> n >> k;
		cout << solve(n, k - 1) << "\n";
	}
	return 0;
}
