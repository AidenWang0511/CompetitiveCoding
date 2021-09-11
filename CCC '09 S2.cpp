#include<bits/stdc++.h>
using namespace std;

int R,C;
set<string> pattern[31]; 
char c;

string XOR(string a, string b){
	string c = "";
	for(int i=0; i<a.size(); i++){
		if(a[i] == b[i]) c.push_back('0');
		else c.push_back('1');
	}
	return c;
}

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
	cin>>R>>C;
	for(int i=1; i<=R; i++){
		string s;
		for(int j=1; j<=C; j++){
			cin>>c;
			s.push_back(c);
		}
		pattern[i].insert(s);
		for(string t: pattern[i-1]) pattern[i].insert(XOR(s,t));
	}
	cout<<pattern[R].size()<<endl;
	
	return 0;
} 
