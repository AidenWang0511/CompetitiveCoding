#include <bits/stdc++.h>
using namespace std;

bool prime(int a){
    bool check = true;
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
    
    int user1,user2;
    cin>>user1;
    for(int i=0; i<user1; i++){
        cin>>user2;
        for(int j=2; j<user2; j++){
            if(prime(j)&&prime(user2*2-j)){
                cout<<j<<' '<<user2*2-j<<"\n";
                break;
            }
        }
    }
    
    
    
    return 0;
}
