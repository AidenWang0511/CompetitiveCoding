#include <bits/stdc++.h>
using namespace std;

int prime[1001]; 
void SieveOfEratosthenes(int n){
    memset(prime, 0, sizeof(prime)); 
    for (int i=2; i*i<=n; i++){ 
        if (prime[i] == 0)
        {
            for (int j=i*i; j<=n; j += i) 
                prime[j]++; 
        } 
    } 
}

int main(){
	SieveOfEratosthenes(1001);
	for(int i=0,n; i<5; i++){
		cin>>n;
		if(prime[n] == 3) cout<<"valid"<<"\n";
		else cout<<"not"<<"\n";
	}
	return 0; 
}

