#include <bits/stdc++.h>
using namespace std;

int N;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>N;
    for(int i=0; i<N; i++){
        string a;
        cin>>a;
        int ans = 0;
        for(int j=0; j<a.size()-1; j++){
            if(a[j] == 'N'){
                if(a[j+1] == 'W'){
                    ans--;
                }else if(a[j+1] == a[j]){
                    
                }else{
                    ans++;
                }
            }else if(a[j] == 'E'){
                if(a[j+1] == 'N'){
                    ans--;
                }else if(a[j+1] == a[j]){
                    
                }else{
                    ans++;
                }
            }else if(a[j] == 'S'){
                if(a[j+1] == 'E'){
                    ans--;
                }else if(a[j+1] == a[j]){
                    
                }else{
                    ans++;
                }
            }else if(a[j] == 'W'){
                if(a[j+1] == 'S'){
                    ans--;
                }else if(a[j+1] == a[j]){
                    
                }else{
                    ans++;
                }
            }
        }
        if(ans>0){
            cout<<"CW"<<endl;
        }else{
            cout<<"CCW"<<endl;
        }
    }

    return 0;
}