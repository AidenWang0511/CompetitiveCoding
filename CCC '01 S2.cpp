#include <bits/stdc++.h>
using namespace std;

int num[16][16], r=7, c=7, d, low, upp, step=1, k, j, minr=7, minc=7, maxr=7, maxc=7;
int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

int main(){
    cin>>low>>upp;
    num[r][c]=low;
    for(int i=low+1; i<=upp; ){
        if(j<step){
            r += dir[d][0];
            c += dir[d][1];
            num[r][c] = i;
            minr = min(r, minr); 
			minc = min(c,minc);
            maxr = max(r, maxr); 
			maxc = max(c, maxc);
            j++; 
			i++;
        }else{
            d = (d+1)%4;
            k++; j=0;
            if(k%2==0) step++;
        }
    }

    for(int i=minr; i<=maxr; i++){
        for(int j=minc; j<=maxc; j++){
            if(num[i][j]/10)	cout<<num[i][j]<<" ";
            else if(num[i][j] != 0)	cout<<" "<<num[i][j]<<" ";
            else	cout<<"   ";
        }
        cout<<endl;
    }
    return 0;
}
