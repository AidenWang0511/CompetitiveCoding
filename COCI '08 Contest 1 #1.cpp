#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    int A,B,C;
    cin>>A>>B>>C;
    if(B-A > C-B){
    	cout<<B-A-1<<endl;
	}else{
		cout<<C-B-1<<endl;
	}
    
    return 0;
}
