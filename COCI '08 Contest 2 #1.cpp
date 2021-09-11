#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[4];
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;
	sort(arr, arr+4);
	cout<<arr[0]*arr[2]<<endl;
	return 0;
} 
