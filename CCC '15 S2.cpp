#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    
    int A,J,num,ans=0;
    int arr[1000000] = {0};
    char size;
    cin>>J>>A;
    for (int i=1; i<=J; i++) {
		cin >> size;
		if (size == 'S') arr[i] = 0;
		else if (size == 'M') arr[i] = 1;
		else arr[i] = 2;
	}
	for (int i=1; i<=A; i++) {
		cin >> size >> num;
		int tmp = 0;
		if (size == 'S') tmp = 0;
		else if (size == 'M') tmp = 1;
		else tmp = 2;
		if (tmp <= arr[num]) {
			ans++;
			arr[num] = -1;
		}
	}
	cout << ans << "\n";
	return 0;
}
