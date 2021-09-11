#include <bits/stdc++.h>
using namespace std;

int a[11]={5, 13, 19, 21, 37, 56, 64, 75, 80, 88, 92 };

int main()
{
	int x;
	cin>>x;
	int l=0,r=10, mid = 0;
	
	while(l<=r){
		mid = (l+r)/2;
		if(a[mid] == x){
			cout<<mid<<endl;
			return 0;
		}else if(a[mid]>x){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	cout<<"Not Found"<<endl;
	
	return 0;	
}

