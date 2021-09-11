#include <bits/stdc++.h>
using namespace std;

bool check(string m, string f, string b){
	bool okay = true;
	for(int i = 0 ; i <= 4 && okay ; i++){
		if(b.at (i) >= 'A' && b.at (i) <= 'E'){
			okay = (m.at (i * 2) >= 'A' && m.at (i * 2) <= 'E') || (m.at (i * 2 + 1) >= 'A' && m.at (i * 2 + 1) <= 'E') || (f.at (i * 2) >= 'A' && f.at (i * 2) <= 'E') || (f.at (i * 2 + 1) >= 'A' && f.at (i * 2 + 1) <= 'E');
		}else{
			okay = ((m.at (i * 2) >= 'a' && m.at (i * 2) <= 'e') || (m.at (i * 2 + 1) >= 'a' && m.at (i * 2 + 1) <= 'e')) && ((f.at (i * 2) >= 'a' && f.at (i * 2) <= 'e') || (f.at (i * 2 + 1) >= 'a' && f.at (i * 2 + 1) <= 'e'));
		}
	}
	return okay;
}

int main(){
	int x;
	string mother, father, baby;
	cin>>mother;
	cin>>father;
	cin>>x;
	for (int i=1; i<=x; i++){
	    cin>>baby;
	    if (check (mother, father, baby))	cout<<"Possible baby."<<endl;
	    else	cout<<"Not their baby!"<<endl;
	}
	return 0;
} 

