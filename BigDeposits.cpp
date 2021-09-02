#include <bits/stdc++.h>
using namespace std;

int P, Y;
long long T, sum;

bool Check (long long x) {
	sum = 0LL;
	for (int i=0; i<Y; i++) {
		sum = (sum + x) * (100 + P) / 100;
		if (sum >= T) return 1;
	}
	return 0;
}

int main () {
	cin >> P >> Y >> T;
	long long lo = 0, hi = T;
	while (lo <= hi) {
		long long mid = (lo + hi) >> 1;
		if (Check(mid)) hi = mid - 1;
		else lo = mid + 1;
	}
	cout << lo << endl;
	return 0;
}