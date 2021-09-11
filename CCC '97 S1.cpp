#include <bits/stdc++.h>
using namespace std;

int main(){
	string a[21],b[21],c[21];
	int n,s,v,o;
	cin>>n;
	for(int t=0; t<n; t++){
		cin>>s;
		cin>>v;
		cin>>o;
		cin.ignore();
		for(int i=0; i<s; i++){
			getline(cin,a[i]);
		}
		for(int i=0; i<v; i++){
			getline(cin,b[i]);
		}
		for(int i=0; i<o; i++){
			getline(cin,c[i]);
		}
		for(int i=0; i<s;i++){
			for(int j=0; j<v; j++){
				for(int k=0; k<o; k++){
					cout<<a[i]<<' '<<b[j]<<' '<<c[k]<<'.'<<endl;
				}
			}
		}
	}
	return 0;
} 
