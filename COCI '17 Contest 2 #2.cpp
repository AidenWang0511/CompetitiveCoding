#include <bits/stdc++.h> 
using namespace std;

const int Maxl = 26;

char tmp[30];
int k, n;
vector <string> V[Maxl];
int pnt[Maxl];

int main()
{
	cin>>k>>n;
	for (int i = 0; i < k; i++) {
		string tmp;
		cin>>tmp;
		V[tmp[0] - 'a'].push_back(tmp);
	}
	for (int i = 0; i < Maxl; i++)
		sort(V[i].begin(), V[i].end());
	for (int i = 0; i < n; i++) {
		char ch; 
		cin>>ch;
		int let = ch - 'a';
		cout<<V[let][pnt[let]].c_str()<<endl;
		pnt[let] = (pnt[let] + 1) % int(V[let].size());
	}
	return 0;
}
