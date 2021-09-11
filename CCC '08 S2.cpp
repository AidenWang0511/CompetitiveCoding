#include<bits/stdc++.h>
using namespace std;

int main(){
	int r1,ans;
	double r2;
	cin>>r1;
	while(r1!=0){
		ans = 0;
		r2 = (double)r1*r1;
		for(int i=1; i<=r1; i++){
			ans+=(int)sqrt(r2-(double)i*i) + 1;
		}
		ans = 4*ans+1;
		cout<<ans<<endl;
		cin>>r1;
	}
	return 0;
} 
