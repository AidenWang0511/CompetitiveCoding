#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	int arr[5];
	int a=0,b=0,c=0,d=0,e=0;
	int x;
	for(int i=0; i<4; i++){
		cin>>x;
		a+=x;
	}
	for(int i=0; i<4; i++){
		cin>>x;
		b+=x;
	}
	for(int i=0; i<4; i++){
		cin>>x;
		c+=x;
	}
	for(int i=0; i<4; i++){
		cin>>x;
		d+=x;
	}
	for(int i=0; i<4; i++){
		cin>>x;
		e+=x;
	}
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;
	arr[4] = e;
	sort(arr, arr+5);
	if(arr[4] == a){
		cout<<1<<' '<<a<<endl;
	}
	if(arr[4] == b){
		cout<<2<<' '<<b<<endl;
	}
	if(arr[4] == c){
		cout<<3<<' '<<c<<endl;
	}
	if(arr[4] == d){
		cout<<4<<' '<<d<<endl;
	}
	if(arr[4] == e){
		cout<<5<<' '<<e<<endl;
	}
	
	return 0;
}
