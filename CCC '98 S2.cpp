#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

int main (int argc, char const *argv[]) {
	cin.sync_with_stdio(0);
	cin.tie(0);
	for (int i=1000; i<=9999; i++) {
		int sum = 0;
		for (int j=1; j<=sqrt(i); j++) {
			if (i % j == 0) {
				if (i > j) sum += j;
				if (i > (i / j)) sum += (i / j);
			}
		}
		if (sum == i) ans.push_back(i);
	}
	for (auto i : ans) cout << i << " ";
	ans.clear();
	cout << "\n";
	for (int i=100; i<=999; i++) {
		string s = to_string(i);
		long long sum = 0LL;
		for (auto i : s) {
			int c = (int) i - '0';
			sum += (c * c * c);
		}
		if (sum == i) ans.push_back(i);
	}
	for (auto i : ans) cout << i << " ";
	return 0;
}
