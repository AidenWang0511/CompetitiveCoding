#include<bits/stdc++.h>
using namespace std;

int oddNum = 0, evenNum = 0, N, input, ans = 0;

int check(int a){
    if(a%2 == 0){
        return 1;
    }
    return 0;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>input;
        if(check(input)){
            evenNum++;
        }
    }
    oddNum = N-evenNum;
    if(oddNum < evenNum){
        ans = oddNum*2+1;
    }else if(oddNum == evenNum){
        ans = oddNum*2;
    }else{
        oddNum = oddNum - evenNum;
        ans = evenNum*2;
        int x = oddNum/3;
        ans += x*2;
        if(oddNum%3 == 1){
            ans--;
        }else if(oddNum%3 == 2){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}