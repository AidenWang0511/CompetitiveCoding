#include <bits/stdc++.h>
using namespace std;

struct Disjoint {
private:
	int N;
	vector<int> lead, rank;

public:
	Disjoint(int N) : N(N), lead(N + 1), rank(N + 1) { }

	void make_Set () {
		for (int i=1; i<=N; i++) {
			lead[i] = i;
			rank[i] = 0;
		}
	}
	
	// Path Compression
	int Find (int x) {
		while (x ^ lead[x]) {
			lead[x] = lead[lead[x]];
			x = lead[x];
		}
		return x;
	}

	bool Merge (int x, int y) {
		int c = Find(x);
		int d = Find(y);
		if (c ^ d) return 1;
		return 0;
	}

	void Union (int x, int y) {
		int c = Find(x);
		int d = Find(y);
		if (c ^ d) {
			if (rank[c] > rank[d]) lead[d] = c;
			else {
				lead[c] = d;
				rank[d] = rank[d] + (rank[d] == rank[c]);
			}
		}
	}
}; 

Disjoint ds(100001);
int N, M, K, x, y;
vector<int> people;

int main () {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	ds.make_Set();
	for (int i=1; i<=M; i++) {
		cin >> K >> x;
		for (int i=1; i<K; i++) {
		  cin >> y;
		  ds.Union(x, y);
		}
	}
	for (int i=1; i<=N; i++) if (ds.Find(1) == ds.Find(i)) people.push_back(i);
	cout << people.size() << "\n";
	for (size_t i=0; i<people.size(); i++) cout << people[i] << " ";
	return 0;
}
