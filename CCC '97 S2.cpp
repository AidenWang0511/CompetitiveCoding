#include <bits/stdc++.h>
using namespace std;

bool nasty(int x){
	int f1,f2;
	double s = sqrt(x);
	int diff;
	f1=1;
	while(f1<=s){
		while(f1<=s && x%f1 !=0){
			f1++;
		}
		if(f1<s){
			diff = x/f1 - f1;
			f2 = f1+1;
			while(f2<=s && (x/f2 +f2) > diff){
				while(f2<=s && x%f2 !=0){
					f2++;
				}
				f2++;
			}
			if(f2<s && (x/f2 + f2) == diff){
				return true;
			}			
		}
		f1++;
	}
	return false;
}


int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	int n;
	int x;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		if(nasty(x)){
			cout<<x<<" is nasty"<<endl;
		}else{
			cout<<x<<" is not nasty"<<endl;
		}
	}
		
	return 0;
}
