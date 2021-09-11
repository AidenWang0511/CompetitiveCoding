#include <bits/stdc++.h>
using namespace std;

int main(){
	string plain,c1,c2,decode="...........................",characters="ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
	int x,count,dot;
	getline(cin,plain);
	getline(cin, c1);
	getline(cin, c2); 
	for(int i=0; i<c1.length(); i++){
		x = characters.find(c1.at(i));
		decode = decode.substr(0,x) + plain.at(i) + decode.substr(x+1);
	}
	count = 0;
	for(int i=0; i<decode.length(); i++){
		if(decode.at(i) == '.')	count++;
	}
	if(count == 1){
		dot = decode.find('.');
		for(int i=0; i<27; i++){
			x=decode.find(characters.at(i));
			if(x == -1){
		    	decode = decode.substr(0, dot) + characters.at(i) + decode.substr(dot + 1);
			}
		}
	}
	for(int i=0; i<c2.length(); i++){
	    x = characters.find(c2.at(i));
	    cout<<decode.at(x);
	}
	cout<<endl;
	return 0;
}
   
