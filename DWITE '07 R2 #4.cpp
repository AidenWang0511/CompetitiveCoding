#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
	
	string s;
	int sz;
	for(int i=0; i<5; i++){
		stack<char> myStack;
		int nb = 0;
		cin>>s;
		sz = s.size();
		for(int j=0; j<sz; j++){
			if(s[j] == '(' || s[j] == '[' || s[j] == '{'){
				myStack.push(s[j]);
			}
			if(s[j] == ')'){
				if(myStack.empty()){
					cout<<"not balanced"<<"\n";
					nb = 1;
					break;
				}else if(myStack.top() == '('){
					myStack.pop();
				}else if(myStack.top() != '('){
					cout<<"not balanced"<<"\n";
					nb = 1;
					break;
				}
			}
			if(s[j] == ']'){
				if(myStack.empty()){
					cout<<"not balanced"<<"\n";
					nb = 1;
					break;
				}else if(myStack.top() == '['){
					myStack.pop();
				}else if(myStack.top() != '['){
					cout<<"not balanced"<<"\n";
					 nb = 1;
					break;
				}
			}
			if(s[j] == '}'){
				if(myStack.empty()){
					cout<<"not balanced"<<"\n";
					nb = 1;
					break;
				}else if(myStack.top() == '{'){
					myStack.pop();
				}else if(myStack.top() != '{'){
					cout<<"not balanced"<<"\n";
					nb = 1;
					break;
				}
			}
		}
		if(nb == 0){
			if(myStack.empty()){
				cout<<"balanced"<<"\n";
			}else{
				cout<<"not balanced"<<"\n";
			}
		}
	}
	
	
	return 0;
}
