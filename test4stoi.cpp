#include <bits/stdc++.h>
using namespace std;

int size,length;
string input;

void printSubSeqRec(string str, int n, int index = -1, string curr = ""){
    // base case 
    if (index == n)  
        return; 
   
    cout << curr << "\n"; 
    for (int i = index + 1; i < n; i++) { 
   
        curr += str[i]; 
        printSubSeqRec(str, n, i, curr); 
        curr = curr.erase(curr.size() - 1);  
    } 
    return; 
} 

int main(){
	cin>>input>>length;
	size = input.size();
	printSubSeqRec(input,size);
	return 0;
} 
