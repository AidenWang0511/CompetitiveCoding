#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long double p, t; 
	cin>>n; 
	vector<pair<long double, long double>> values; 
	long double maxSpeed = -100;
	for (int i=0; i<n; i++) {
		cin>>t>>p;
		values.push_back({t, p});
	}
	sort(values.begin(), values.end());
	for (int i=0; i<n-1; i++) {
		long double time = values[i+1].first - values[i].first;
		long double dist = values[i+1].second - values[i].second;
		maxSpeed = max(maxSpeed, abs(dist/time));
	}
	cout<<fixed<<setprecision(10)<<maxSpeed<<endl;
	return 0;
}
