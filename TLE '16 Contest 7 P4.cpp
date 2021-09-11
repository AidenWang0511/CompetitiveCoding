#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    int T;
	unsigned long long X;
    cin>>T;
    for(int i=0; i<T; i++){
    	int ans = 0;
    	cin>>X;
    	while(X!=0){
    		if(X%2 == 0){
    			X = X/2;
    			ans++;
			}else if(X == 3){
				X--;
				ans++;
			}else if(X%4 == 1){
				X -= 1;
				ans++;
			}else if(X%4 == 3){
				X += 1;
				ans++;
			}
		}
		cout<<ans<<endl;
	}
    
    return 0;
}
