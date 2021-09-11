#include <bits/stdc++.h>
using namespace std;

int main(){
	bool arr[201][401];
	memset(arr, false, sizeof arr);
	arr[1][201] = true;
	arr[2][201] = true;
	arr[3][201] = true;
	arr[7][201] = true;
	arr[5][200] = true;
	arr[6][200] = true;
	arr[7][200] = true;
	arr[3][202] = true;
	arr[7][202] = true;
	arr[3][203] = true;
	arr[7][203] = true;
	arr[3][204] = true;
	arr[4][204] = true;
	arr[5][204] = true;
	arr[7][204] = true;
	arr[5][205] = true;
	arr[7][205] = true;
	arr[3][206] = true;
	arr[4][206] = true;
	arr[5][206] = true;
	arr[7][206] = true;
	arr[3][207] = true;
	arr[7][207] = true;
	arr[3][208] = true;
	arr[4][208] = true;
	arr[5][208] = true;
	arr[6][208] = true;
	arr[7][208] = true;
	char a;
	int b,x=200,y=5;
	while(true){
		cin>>a>>b;
		bool check = true;
		
		if(a == 'q'){
			break;
		}else if(a == 'l'){
			for(int i=0; i<b; i++){
				x=x-1; y=y; 
				if(x>=0 && x<=401){
					if(arr[y][x])	check = false; 
				}else{
					check=false;
					break;
				}
				arr[y][x] = true;
			}
			if(check){
				cout<<x-201<<' '<<y*-1<<' '<<"safe"<<endl;
			}else{
				cout<<x-201<<' '<<y*-1<<' '<<"DANGER"<<endl;
				break;
			}
		}else if(a == 'r'){
			for(int i=0; i<b; i++){
				x=x+1; y=y; 
				if(x>=0 && x<=401){
					if(arr[y][x])	check = false;
				}else{
					check=false;
					break;
				}
				arr[y][x] = true;
			}
			if(check){
				cout<<x-201<<' '<<y*-1<<' '<<"safe"<<endl;
			}else{
				cout<<x-201<<' '<<y*-1<<' '<<"DANGER"<<endl;
				break;
			}
		}else if(a == 'u'){
			for(int i=0; i<b; i++){
				x=x; y=y-1; 
				if(y>0 && y<=201){
					if(arr[y][x])	check = false;
				}else{
					check=false;
					break;
				}
				arr[y][x] = true;
			}
			if(check){
				cout<<x-201<<' '<<y*-1<<' '<<"safe"<<endl;
			}else{
				cout<<x-201<<' '<<y*-1<<' '<<"DANGER"<<endl;
				break;
			}
		}else if(a == 'd'){
			for(int i=0; i<b; i++){
				x=x; y=y+1; 
				if(y>0 && y<=201){
					if(arr[y][x])	check = false;
				}else{
					check=false;
					break;
				}
				arr[y][x] = true;
			}
			if(check){
				cout<<x-201<<' '<<y*-1<<' '<<"safe"<<endl;
			}else{
				cout<<x-201<<' '<<y*-1<<' '<<"DANGER"<<endl;
				break;
			}
		}
		
		
	}
	
	
	return 0;
} 
