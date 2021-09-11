#include <bits/stdc++.h>
using namespace std;

void primeFact(int n) {
    for (int i = 2, limit = sqrt(n); i <= limit; i++){
		while (n%i == 0){
			cout<<i<<"\n";
        	n = n/i;
		}
	}
	if (n!=1)	cout<<n<<"\n";
}
int main() {
	int n;
	cin>>n;
	primeFact(n);	
	return 0;
}
