#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp){  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
int bubbleSort(int arr[], int n){  
    int i, j, num=0;  
    for (i = 0; i < n-1; i++){
    	for (j = 0; j < n-i-1; j++){
    		if (arr[j] > arr[j+1]){
    			swap(&arr[j], &arr[j+1]);
    			num++;
			} 
		}
	}    
	return num;
}  


int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
	int n;
	int arr[61];
	cin>>n;
	for(int i=0; i<n; i++){
		int l;
		cin>>l;
		for(int j=0; j<l;j++){
			cin>>arr[j];
		}
		int ans = bubbleSort(arr, l);
		cout<<ans<<endl;
	}
	return 0;
}
