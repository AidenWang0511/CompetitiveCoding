#include <bits/stdc++.h>
using namespace std;

int mini = 9999, count, target, loop;
int h[11];

void go(int a, int count, int check[10]) {
	int j;
	if (a == target && count < mini) {
		mini = count;
	}
	else {
		for (j = 0; j < loop; j++) {
			if (check[j] == 1) {
				check[j] = 0;
				go(a + h[j], count + 1, check);
				check[j] = 1;
			}
		}
	}
	return;
}

int main() {
	
	int i;
	int temp[10];

	for (i = 0; i < 10; i++)	temp[i] = 1;
	cin>>target>>loop;
	for (i = 0; i < loop; i++) {
		cin>>h[i];
	}

	for (i = 0; i < loop; i++) {
		temp[i] = 0;
		go(h[i], 1, temp);
		temp[i] = 1;
	}
	
	if (mini == 9999){
		cout<<0<<endl;
	}else{
		cout<<mini<<endl;
}
	return 0;
}
