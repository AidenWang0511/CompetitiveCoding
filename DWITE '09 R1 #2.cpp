#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, j;
	
    for (int ncases=0; ncases<5; ncases++) {
		string str;
		cin >> str;
		
		int n = str.length();
		vector<int> nList(n);
		for (i=0; i<n; i++) nList[i] = i;
		
		do {
			for (i=0; i<n; i++)
				cout << str[nList[i]];
			cout << endl;
		}while(next_permutation(nList.begin(), nList.end()));
	}
	return 0;
}
