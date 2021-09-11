#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
    int m,n;
    cin>>n>>m;
    int board[n][n] = {0};
    int x0,y0,x,y;
    for(int i =0; i < m; i++){
        cin>>x0>>y0;
        x=x0;
        y=y0;
        while(x<=n && y<=n && x>0 && y>0){
            board[x-1][y-1]=1;
            x++;
            y++;
        }
        x=x0;
        y=y0;
        while(x<=n && y<=n && x>0 && y>0){
            board[x-1][y-1]=1;
            x++;
            y--;
        }
        x=x0;
        y=y0;
        while(x<=n && y<=n && x>0 && y>0){
            board[x-1][y-1]=1;
            x--;
            y++;
        }
        x=x0;
        y=y0;
        while(x<=n && y<=n && x>0 && y>0){
            board[x-1][y-1]=1;
            x--;
            y--;
        }
        x=x0;
        y=y0;
        while(x<=n && y<=n && x>0 && y>0){
            board[x-1][y-1]=1;
            x--;
        }
        x=x0;
        y=y0;
        while(x<=n && y<=n && x>0 && y>0){
            board[x-1][y-1]=1;
            y--;
        }
        x=x0;
        y=y0;
        while(x<=n && y<=n && x>0 && y>0){
            board[x-1][y-1]=1;
            x++;
        }
        x=x0;
        y=y0;
        while(x<=n && y<=n && x>0 && y>0){
            board[x-1][y-1]=1;
            y++;
        }
    }
    int c=0;
    for(int i =0; i <n; i++){
        for(int k =0; k <n; k++){
            if(board[i][k]==1){
                c++;
            }
        }
    }
    cout<<(n*n-c)<<endl;
    return 0;
}
