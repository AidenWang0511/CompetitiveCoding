#include <bits/stdc++.h>
using namespace std;

bool prime[101]; 
void SieveOfEratosthenes(int n){
    memset(prime, true, sizeof(prime)); 
    for (int i=2; i*i<=n; i++){ 
        if (prime[i] == true){
            for (int j=i*i; j<=n; j += i){
                prime[j] = false; 
            }
        } 
    } 
}

int main(){
	SieveOfEratosthenes(101);
	for(int i=0; i<5; i++){
		int n,a,b;
		cin>>n;
		for(int j=n-1; j>=2; j--){
			if(prime[j]){
				a = j;
				break;
			}
		}
		for(int j=a-1; j>=2; j--){
			if(prime[j]){
				a = j;
				break;
			}
		}
		for(int j=n+1; j<=103; j++){
			if(prime[j]){
				b = j;
				break;
			}
		}
		for(int j=b+1; j<=103; j++){
			if(prime[j]){
				b = j;
				break;
			}
		}
		if(abs(a-n) < abs(b-n)) cout<<a<<"\n";
		else cout<<b<<"\n";
	}
}
