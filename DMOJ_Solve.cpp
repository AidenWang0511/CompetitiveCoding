#include <bits/stdc++.h>

using namespace std;

const int maxLen = 1000005;

int N, M;
int days[maxLen], v[maxLen], s[maxLen], t[maxLen], diffArr[maxLen];

bool check(int num) {
	memset(diffArr, 0, sizeof(diffArr));
	// Make Diff
	for (int i = 1; i <= num; i++) {
		diffArr[s[i]] += v[i], diffArr[t[i]+1] -= v[i];
	}
	// Check
	for (int i = 1; i <= N; i++) {
		diffArr[i] += diffArr[i-1];
		if (diffArr[i] > days[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

	// Initialization
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		scanf("%d", &days[i]);
	}
	for (int i = 1; i <= M; i++) {
		scanf("%d %d %d", &v[i], &s[i], &t[i]);
	}
	
	// Binary Search
	int low = 1, mid, high = N, flag = -1, ans = 0;
	while (low <= high) {
		mid = (low+high)/2;
		if (check(mid)) {
			ans = mid;
			low = mid+1;
		} else {
			high = mid-1;
		}
	}
	if (mid == high) {
		flag = 0;
	}
	
	
	// Output
	if (flag == -1) {
		cout << flag << endl << ans;
	} else {
		cout << flag;
	}
	
    return 0;
}