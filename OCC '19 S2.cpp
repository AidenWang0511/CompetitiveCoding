#include <bits/stdc++.h>
using namespace std;
long long N;

int f(long long x){
	if(x>N){
		return 0;
	}
	return f(x*10+2) + f(x*10+3) + 1;
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin>>N;
	cout<<f(2)+f(3)<<endl;
	
	return 0;
}
