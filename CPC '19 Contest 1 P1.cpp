#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    int n,a;
    cin>>n;
    if(n%2 == 0){
    	int i=1, j=0;
    	while( (i+j) <= n){
    		cout<<i<<' ';
    		cout<<n-j<<' ';
    		i++;
    		j++;
		}
	}
    return 0;
}
