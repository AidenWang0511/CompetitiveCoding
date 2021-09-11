#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
	for (int k=0; k<5; k++) {
			for (int i = 0; i < 5; i++) {
				string n;
				cin>>n; 
				int total = 0;
				int currSum = 0;
				bool mult = true;
				for (int j = n.length() - 1; j >= 0; j--) {
					int num = n[j] - '0';
					if (mult) {
						currSum = num * 2;
						while (currSum != 0) {
							total += currSum % 10;
							currSum /= 10;
						}
					}else{
						total += num;
					}
					mult = !mult;
				}
				cout<<((10 - total % 10) % 10);
			}
			cout<<endl;
		}
	return 0;
}
