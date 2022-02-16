#include <bits/stdc++.h>
using namespace std;

int N, num4, num5;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
    
    cin>>N;
    if(N<4 || N==6 || N==7 || N==11){
    	cout<<0<<endl;
    	return 0;
	}
    num4 = N/4;
    num4 = num4 - (N - num4*4);
    num4 = num4/5 + 1;
    cout<<num4<<endl;

    return 0;
}
