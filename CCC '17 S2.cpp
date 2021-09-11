#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int arr[101] ={-1};
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>arr[i];
    }
    int swapped = 1;
    while(swapped ==1){
        swapped = 0;
        for (int i = 2; i<=N; i++){
            if (arr[i-1] > arr[i]){ 
                int temporary = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temporary;
                swapped = 1;
            }
        }
    }
    int j = 1;
    int x;
    if(N%2 == 1){
        x=N/2+1;
    }else{
        x=N/2;
    }
    
    for(int i=1;i<=N;i++){
        if(j%2 == 1){
            cout<<arr[x-i/2]<<" ";
            j++;
        }else if(j%2 == 0){
            cout<<arr[x+j/2]<<" ";
            j++;
        }
    }
    
    return 0;
}
