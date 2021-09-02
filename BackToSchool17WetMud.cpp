#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100002, INF = 0x3f3f3f3f;
int N, M, J, dp[MAXN], dis[MAXN];
pair<int,int> arr[MAXN];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

int main () {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>N>>M>>J;
	for (int i=1; i<=M; i++){
        cin>>arr[i].first>>arr[i].second;
    }
	sort(arr, arr + M + 1);
	memset(dp, INF, sizeof(dp));
	for (int i=M; i>=0; i--) {
		int inches = arr[i].first;
		int minutes = arr[i].second;
		dis[i] = J + inches;
		while (!pq.empty() && dis[i] < pq.top().second) pq.pop();
		if (N < dis[i]) dp[i] = minutes;
		if (!pq.empty()) dp[i] = min(dp[i], pq.top().first);
		dp[i] = max(dp[i], minutes);
		pq.push({dp[i], inches});
	}
    if(dp[0] == INF){
        cout<<-1<<endl;
    }else{
        cout<<dp[0]<<endl;
    }
	return 0;
}