#include <iostream>
using namespace std;
#include <cmath> 

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int dis = 0;
    char grid[4][4];
    char a[4][4] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','.'};
    string input;
    for(int i=0;i<4;i++){
        cin>>input;
        for(int j=0;j<4;j++){
            grid[i][j] = input.at(j);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(grid[i][j] != a[i][j] && a[i][j] != '.'){
                for(int k=0;k<4;k++){
                    for(int l=0;l<4;l++){
                        if(a[i][j] == grid[k][l]){
                            // cout<<"k:"<<k<<" i:"<<i<<" l:"<<l<<" j:"<<j<<endl;
                            dis += abs(k-i)+abs(l-j);
                        }else{
                            
                        }
                    }
                }
            }else{
                
            }
        }
    }
    cout<<dis<<"\n";
    
    
    
    
    return 0;
}
