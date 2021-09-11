#include <bits/stdc++.h>
using namespace std;

bool prime(int a){
    bool check = true;
    if(a ==1){
        check = false;
    }
    for(int i=2; i*i<=a; i++){
        if(a%i==0){
            check = false;
        }
    }
    return check;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int user1;
    cin>>user1;
    while(true){
        if(prime(user1)){
            cout<<user1;
            break;
        }
        user1++;
    }
    
    return 0;
}
