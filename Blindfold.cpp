#include<bits/stdc++.h>
using namespace std;

int r,c,actionNum;
char m[30001], arr[380][90];

void BruteForce(int x, int y, int direction){
    int moves = 0;
    while(x>=0 && x<r && y>=0 && y<c && (arr[x][y] == '.' || arr[x][y] == '*') && moves<actionNum){
        if(m[moves] == 'L'){
            direction = (direction + 90)%360;
        }else if(m[moves] == 'R'){
            direction = direction - 90;
            if(direction < 0){
                direction = 270;
            }
        }else{
            if(direction == 0){
                y++;
            }else if(direction  == 90){
                x--;
            }else if(direction == 180){
                y--;
            }else{
                x++;
            }
        }
        moves++;
    }
    if(x>=0 && x<r && y>=0 && y<c && arr[x][y] == '.' && moves>=actionNum){
        arr[x][y] = '*';
    }

}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>r>>c;
    for(int i=0; i<r; i++){
        string a;
        cin>>a;
        for(int j=0; j<c; j++){
            arr[i][j] = a[j];
        }
    }
    cin>>actionNum;
    for(int i=0; i<actionNum; i++){
        cin>>m[i];
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            for(int k=0; k<360; k+=90){
                BruteForce(i,j,k);
            }
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j];
        }
        cout<<'\n';
    }
}