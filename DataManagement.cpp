#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    double sum[20]={0};
    memset(sum,0,sizeof(sum));
    //3 nested forloop from 1 to 6
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            for(int k=1; k<=6; k++){
                    sum[i+j+k]++;
            }
        }
    }
    //print sum[]
    double total=0;
    for(int i=1; i<=18; i++){
        cout<<i<<" "<<sum[i]<<endl;
        total+=sum[i];
    }
    double ans = 0;
    for(int i=3; i<=18; i++){
        if(i==18 || i==3){
            ans+=(1.0000/total)*10.00000000;
        }else if(i==5 || i==10 || i==15){
            ans+= (sum[i]/total)*3.00000000;
        }
    }
    ans = ans-1;
    cout<<ans<<endl;

    return 0;
}