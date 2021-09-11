#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, final;
	string allV = "aeiou";
	cin>>a;
	int size = a.size();
	for(int i=0; i<size; i++){
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
			final += a[i];
		}else{
			final+=a[i];
			int vowel = 100;
			for(int j=0; j<5; j++){
				vowel = min(vowel, abs(a[i] - allV[j]) );
			}
			if(  (char)(a[i] - vowel) == 'a' || (char)(a[i] - vowel) == 'e' || (char)(a[i] - vowel) == 'i' || (char)(a[i] - vowel) == 'o' || (char)(a[i] - vowel) == 'u'){
				final += (char)(a[i] - vowel);
			}else{
				final += (char)(a[i] + vowel);
			}
			if(a[i] == 'z') final += "z";
			else{
				if( (char)(a[i]+1) == 'a' || (char)(a[i]+1) == 'e' || (char)(a[i]+1) == 'i' || (char)(a[i]+1) == 'o' || (char)(a[i]+1) == 'u'){
					final += (char)(a[i]+2);
				}else{
					final += (char)(a[i]+1);
				}
			}
		}		
	}
	cout<<final<<"\n";
}
