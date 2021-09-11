#include <bits/stdc++.h>
using namespace std;
int n, k, r, cnt;
long long ans;
bool flag[100000000];

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>k>>r;
	for(int i=0, x; i<k; i++){
		cin>>x;
		flag[x] = 1;
		cnt += x < r;
	}
	for (int i=0; i<=n - r; i++) {
		if (cnt == 1) {
			if (flag[i + r - 1]) flag[i + r - 2] = 1;
			else flag[i + r - 1] = 1;
			cnt++;
			ans++;
		}
		if (cnt == 0) {
			flag[i + r - 1] = flag[i + r - 2] = 1;
			cnt += 2;
			ans += 2;
		}
		cnt += flag[i + r] - flag[i];
	}
	cout << ans << "\n";
	return 0;
}
