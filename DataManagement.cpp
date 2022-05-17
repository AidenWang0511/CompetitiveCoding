#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    int sum[20]={0};
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
    int total=0;
    for(int i=1; i<=18; i++){
        cout<<i<<" "<<sum[i]<<endl;
        total+=sum[i];
    }

    cout<<"sum: "<<total<<endl;

    return 0;
}