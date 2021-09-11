#include<bits/stdc++.h>
using namespace std;
unsigned long long  x,y,A,B,numA,numB,numAB, ans;
unsigned long long a1,a2,b1,b2,ab1,ab2;

int main(){
	cin>>x>>y>>A>>B;
	a2 = y/A;
	b2 = y/B;
	ab2 = y/lcm(A,B);
	for(unsigned long long i=x; i<=y; i++){
		if(i%A == 0){
			a1 = i/A;
			break;
		}
	}
	for(unsigned long long i=x; i<=y; i++){
		if(i%B == 0){
			b1 = i/B;
			break;
		}
	}
	for(unsigned long long i=x; i<=y; i++){
		if(i%lcm(A,B) == 0){
			ab1 = i/lcm(A,B);
			break;
		}
	}
	ans = (a2-a1+1 + b2-b1+1 - (ab2-ab1+1) );
	cout<<ans<<endl;
}
