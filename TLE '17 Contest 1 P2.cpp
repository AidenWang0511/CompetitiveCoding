#include <bits/stdc++.h>
#define ll long long
#define MAXN 100010
#define INF 0x3f3f3f3f
#define vi vector<int>
#define pb push_back
#define pii pair<int, int>
#define pllll pair<ll, ll>
#define mp make_pair
#define f first
#define s second
#define msll map<string, ll>
#define umsll unordered_map<string, ll>
#define sll set<ll>
using namespace std;
int F, N, dist, energy;
ll e[MAXN], d[MAXN], cnt;
string s, t;
msll val;
pair<ll, ll> type[MAXN];
sll si;
inline bool cmp (const pllll &a, const pllll &b) {
	return a.s < b.s;
}
int main () {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin >> F;
	for (int i=0; i<F; i++) {
		cin >> s >> e[i];
		val[s] = e[i];
	}
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> t >> d[i];
		ll energy = val[t];
		type[i] = mp(energy, d[i]);
	}
	sort(type, type + N, cmp);
	for (int i=0; i<N; i++) {
		if (dist ^ type[i].s && type[i].s > energy + dist) break;
		else if (dist == type[i].s) energy += type[i].f;
		else {
			energy -= type[i].s;
			energy += dist;
			energy += type[i].f;
			dist = type[i].s;
		}
		cnt++;
	}
	cout << cnt << "\n";
	return 0;
}
