#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	int happy=0,sad=0;
	getline(cin, str);
	int size = str.size();
	for(int i=0; i<=size-3; i++){
		if(str.substr(i, 3) == ":-)") happy++;
		if(str.substr(i, 3) == ":-(") sad++;
	}
	if(happy == 0 && sad == 0) cout<<"none"<<"\n";
	else if(happy == sad) cout<<"unsure"<<"\n";
	else if(happy<sad) cout<<"sad"<<"\n";
	else if(sad<happy) cout<<"happy"<<"\n";
	
	return 0;
}
