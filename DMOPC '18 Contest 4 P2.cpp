#include <bits/stdc++.h>
using namespace std;
const int MAX = 701, MV = MAX * MAX + 1;
int n, total = 0, best = INT_MAX, tasks[701];
bool dp[490001];

int main(){
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> tasks[i];
		total += tasks[i];
	}
	dp[0] = true;
	for (int i = 0; i < n; i++) {
		for (int j = total; j >= tasks[i]; j--) {
			if(dp[j - tasks[i]]){
				dp[j] = true;
			}
		}
	}
	for (int i = 0; i <= total; i++) {
		if(dp[i]){
			best = min(best, abs(i - (total - i)));
		}
	}
	cout<<best<<endl;
}
