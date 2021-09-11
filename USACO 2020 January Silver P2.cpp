#include <bits/stdc++.h>
using namespace std;
 
int check(long long n, long long k, long long m, long long x) {
  long long g = 0;
  while(k > 0 && g < n) {
    long long y = (n - g) / x;
    if(y < m) {
      long long leftover = (n-g + m-1) / m;
      return leftover <= k;
    }
    long long maxmatch = n - x*y;
    long long numdays = (maxmatch - g) / y + 1;
    if(numdays > k) numdays = k;
    g += y * numdays;
    k -= numdays;
  }
  return g >= n;
}
 
int main() {
	long long n, k, m;
	cin>>n>>k>>m;
	long long lo = 1;
	long long hi = 1e12;
	while(lo < hi) {
		long long mid = (lo + hi + 1) / 2;
		if(check(n, k, m, mid)) {
			lo = mid;
    	}
    else {
      hi = mid - 1;
    }
  }
  cout<<lo;
  return 0;
}
