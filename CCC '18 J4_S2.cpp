#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int arr[100][100] = {0};
    int N;
    cin>>N;
    int input;
    for(int i = 0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>input;
            arr[i][j] = input;
        }
    }
    
    if(arr[0][0] < arr[0][N-1] && arr[0][0] < arr[N-1][N-1] && arr[0][0] < arr[N-1][0]){
        for(int i = 0; i<N; i++){
            for(int j=0; j<N; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
    }else if(arr[0][N-1] < arr[0][0] && arr[0][N-1] < arr[N-1][N-1] && arr[0][N-1] < arr[N-1][0]){
        for(int i = N-1; i>-1; i--){
            for(int j=0; j<N; j++){
                cout<<arr[j][i]<<" ";
            }
            cout<<"\n";
        }
    }else if(arr[N-1][N-1] < arr[0][N-1] && arr[N-1][N-1] < arr[0][0] && arr[N-1][N-1] < arr[N-1][0]){
        for(int i = N-1; i>-1; i--){
            for(int j=N-1; j>-1; j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
    }else if(arr[N-1][0] < arr[0][N-1] && arr[N-1][0] < arr[0][0] && arr[N-1][0] < arr[N-1][N-1]){
        for(int i = 0; i<N; i++){
            for(int j=N-1; j>-1; j--){
                cout<<arr[j][i]<<" ";
            }
            cout<<"\n";
        }
    }else{
        
    }
    
    return 0;
}
