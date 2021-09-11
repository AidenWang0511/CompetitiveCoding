#include <bits/stdc++.h>
using namespace std;
int power, location;

int crystal(int m, int x){
    if(m>=1){
        power = pow(5,m-1);
        location = x/power;
        if(location == 0 || location == 4)	return 0;
        else if(location == 1 || location == 3){
        	return 1*power + crystal(m-1, x%power);
		} else if(location == 2){
			return 2*power + crystal(m-1, x%power);
		}
	}
    return 0;
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	int T,m,x,y;
	cin>>T;
	for(int i=0; i<T; i++){
		cin>>m>>x>>y;
		if(y<crystal(m,x)){
			cout<<"crystal"<<endl;
		}else{
			cout<<"empty"<<endl;
		}
	}
	
	
	return 0;
}
