#include<bits/stdc++.h>
using namespace std;

int N;
char grid[40][40];
int arr[40][40];
string s;
vector<int> row, col;
bool latin, reduced;

int val (char c) {
    if (c >= '0' && c <= '9') return (int) c - '0';
    else return (int) c - 'A' + 10;
}

bool CheckDuplicates () {
  	for (int i=0; i<N; i++) {
    	for (int j=0; j<N; j++) {
      		int next = arr[i][j];
      		for (int k=j + 1; k<N; k++) {
        		if (next == arr[i][k]) return true;
      		}
    	}
  	}
  	return 0;
} 

int main () {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> s;
		for (int j=0; j<N; j++) arr[i][j] = val(s[j]);
    }
	for (int i=0; i<N; i++) {
		row.push_back(arr[0][i]);
		col.push_back(arr[i][0]);
	}
	if (!CheckDuplicates()) latin = true;
	if (is_sorted(row.begin(), row.end()) && is_sorted(col.begin(), col.end())) reduced = true;
  
  	if (!latin) cout << "No" << endl; 
  	else if (latin && !reduced) cout << "Latin" << endl;
  	else if (latin && reduced) cout << "Reduced" << endl;
	return 0;	
}
