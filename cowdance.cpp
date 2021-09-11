#include <bits/stdc++.h>
using namespace std;

int n, tmax;
int t[10001];

bool check(int k) {
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i=0; i<k; i++) {
        pq.push(t[i]);
    }
    for(int i=k; i<n; i++) {
        int a = pq.top();
        pq.pop();
        pq.push(a + t[i]);
    }
    while(pq.size() > 1) {
        pq.pop();
    }
    return tmax >= pq.top();
}

int main() {
	freopen("cowdance.in","r",stdin);
	freopen("cowdance.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n>>maxT;
	for(int i=0; i<n; i++) {
		cin>>t[i];
	}
	int left = 1, right = n, ans = n;
	while(left<=right) {
		int mid = (left+right)/2;
		if(check(mid)) {
			ans = mid;
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	cout<<ans<<endl;

	return 0;
}
