#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int hydrogen = d, carbon = a+b+c+1;
	if(b==0 && a<c-1) {
		cout<<"invalid"<<endl; return 0;
	}
	if(b!=0 && a<c){
		cout<<"invalid"<<endl; return 0;
	}
	int bonds = 2 * a + 4 * b + 6 * c;
	int r = 4 * carbon - bonds;
	if(r != d) cout<<"invalid"<<endl;
	else cout<<"C"<<carbon<<"H"<<hydrogen<<endl;
}

