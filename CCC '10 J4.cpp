#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);	
	int n, v;
	while (true) {
		vector<int> current; vector<int> diff;
		cin >> n;
		if (n == 0)	break;
		if (n==1) {
			cin >> v; 
			cout << 0 << endl;
		}else {
			for(int i=0; i<n; i++){
			    cin >> v; 
			    current.push_back(v);
			}	
			for(int i=0; i<n-1; i++){	
			    diff.push_back(current[i+1] - current[i]);
			}
			for (int i = 1; i <= diff.size(); i++) {
				int current = 0; 
				bool works = true;
				for (int j = 0; j < diff.size(); j++) {
					if (diff[current] != diff[j]){
						works = false; 
						break;
					}	
					current++; 
					current = current % i;
				}
				if (works){
					cout << i << endl; 
					break;
				}
			}
		}
	}
	return 0;
}
