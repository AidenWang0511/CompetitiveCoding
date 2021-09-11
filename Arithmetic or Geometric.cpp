#include<bits/stdc++.h>
using namespace std;
unsigned long long a1,a2,a3,k,ans, r;
int T;

unsigned long long power(unsigned long long base, unsigned long long exp, unsigned long long mod){
	if(exp == 0){
		return 1;
	}
	unsigned long long t = power(base, exp/2, mod);
	t = t*t%mod;
	if(exp%2 == 0)	return t;
	return t*base%mod;
}

int main(){
	cin>>T;
	for(int t=0; t<T; t++){
		cin>>a1>>a2>>a3>>k;
		if(a3-a2 == a2-a1){
			ans = a1 + (k-1)*(a2-a1);
			ans = ans%1000000007;
			cout<<ans<<endl;
		}else{
			r = a3/a2;
			ans = a1 * power(r, k-1, 1000000007);
			ans = ans%1000000007;
			cout<<ans<<endl;
		}
	}
}
