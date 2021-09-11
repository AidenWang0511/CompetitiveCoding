#include <bits/stdc++.h>
using namespace std;
int main () {
	vector< vector<int> > g(8);
	g[1].push_back(7);
	g[1].push_back(4);
	g[2].push_back(1);
	g[3].push_back(4);
	g[3].push_back(5);
	int deg[8] = {-1, 1, 0, 0, 2, 1, 0, 1}, a[8];
	int x, y, ind = 0;
	cin>>x>>y;
	while (x!=0 && y!=0) {
		g[x].push_back(y);
		deg[y]++;
		cin>>x>>y;
	}
	priority_queue<int, vector<int>, greater<int> > pq;
	for (int i=1; i<=7; i++) {
		if (!deg[i]) {
		    pq.push(i);
		    deg[i]--;
		}
	}
	while (!pq.empty()) {
		int cur = pq.top();
		pq.pop();
		a[++ind] = cur;
		for (auto a: g[cur]) {
			if (!(--deg[a])) pq.push(a);
		}
	}
	if (ind == 7) {
		for (int i=1; i<=7; i++) cout<<a[i]<<' ';
	}
	else cout<<"Cannot complete these tasks. Going to bed.";
	cout<<endl;
}
