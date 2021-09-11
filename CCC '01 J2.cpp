#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=1,m,x;
	cin>>x>>m;
	while(n<m && x*n % m != 1){
		n++;
	}
	if(n>=m){
		cout<<"No such integer exists."<<endl;
	}else{
		cout<<n<<endl;
	}
} 
