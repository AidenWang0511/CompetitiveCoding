#include <bits/stdc++.h>
using namespace std;

int r, c, cnt1, cnt2, ans;
string s;
char op[101][101];
bool flag;

int main () {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> r >> c;
	for (int i=0; i<r; i++) {
		cin >> s;
		for (int j=0; j<c; j++) op[i][j] = s[j];
	}
	for (int i=0; i<r; i++) {
		for (int j=0; j<c; j++) {
			if (op[i][j] == '.') {
				cnt1 = cnt2 = 0;
				for (int k=-1; k<=1; k++) {
					for (int l=-1; l<=1; l++) {
						if ((k || l) && i + k >= 0 && i + k < r && j + l >= 0 && j + l < c) {
							if (op[i + k][j + l] == '.') cnt1++;
							else cnt2++;
						}
					}
				}
				ans += cnt1 > cnt2;
			}
		}
	}
	cout << ans << "\n";
	return 0;
}
