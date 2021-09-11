#include <cstring>
#include <bits/stdc++.h>
using namespace std;

string a, b;
char op;
int la, lb;



void pZero( int n ) {
	for( int i = 0; i < n; ++i ) cout<<'0';
}
	
int main(void) {
	cin>>a>>op>>b;
	la = a.length();
	lb = b.length();
	if(op =='+'){
		if(la==lb){ 
			cout<<'2'; 
			pZero(la-1); 
		}
		else {
			cout<<'1'; 
			pZero(max(la, lb) - min(la, lb) - 1); 
			cout<<'1'; 
			pZero(min(la, lb) - 1);
		}
	}else{
		cout<<'1';
		pZero( la+lb-2 );
	}
	cout<<endl;
	return 0;
}
