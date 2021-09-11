#include <iostream>
using namespace std;

int row[1001];
int column[1001];
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int R,C,Q,R1,C1;
    string input;
    cin>>R>>C;
    for(int i = 1; i<=R; i++){
        cin>>input;
        for(int j=1; j<=C; j++){
            if (input[j-1] == 'X'){
                row[i] = 1;
                column[j] = 1;
            }
        }
    }
    
    cin>>Q;
    for(int i = 1; i<=Q; i++){
        cin>>R1>>C1;
        if(row[C1]==1 || column[R1]==1){
            cout<<"Y\n";
        }else{
            cout<<"N\n";
        }
    }

    return 0;
}
