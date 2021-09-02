#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000005;
int N, K;
long long ans;
deque<int> minq, maxq;
int arr[MAXN];

int main () {
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
	cin>>N>>K;
	for (int i=0, left=0; i<N; i++) {
		cin >> arr[i];
		while (!minq.empty() && arr[i] < minq.back()) minq.pop_back();
		minq.push_back(arr[i]);
		while (!maxq.empty() && arr[i] > maxq.back()) maxq.pop_back();
		maxq.push_back(arr[i]);
		while (left < i && maxq.front() - minq.front() > K) {
			if (!minq.empty() && arr[left] == minq.front()) minq.pop_front();
			if (!maxq.empty() && arr[left] == maxq.front()) maxq.pop_front();
			left++;
		}
		ans += i - left + 1;
	}
	cout<<ans<<endl;
	return 0;
}
