#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, x = 0;
	string a,b;
	cin>>N;	
	cin>>a;
	cin>>b;
	for(int i= 0; i<N; i++){
		if(a[i] == 'C' && b[i] == 'C') x++;
	}
	cout<<x<<endl;
	return 0;
}
