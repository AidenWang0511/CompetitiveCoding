#include <bits/stdc++.h>
using namespace std;

int main(){
	stack<string> st1,st2;
	string a,b="";
	int counter = 0;
	while(true){
		cin>>a;
		st1.push(a);
		cin>>b;
		counter++;
		if(b=="SCHOOL"){
			break;
		}
		st2.push(b);
		
	}
	while(!st1.empty()){
		a=st1.top();	st1.pop();
		if(counter==1){
			if(a == "R"){
				cout<<"Turn LEFT into your HOME."<<endl;
			}else{
				cout<<"Turn RIGHT into your HOME."<<endl;
			}
		}else{
			b=st2.top();	st2.pop();
			if(a == "R"){
				cout<<"Turn LEFT onto "<<b<<" street."<<endl;
			}else{
				cout<<"Turn RIGHT onto "<<b<<" street."<<endl;
			}
			counter--;
		}
	}
	return 0;
} 
