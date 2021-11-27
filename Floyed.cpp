#include <bits/stdc++.h>
using namespace std;

int a[101][3];
double f[101][101];
int n,i,j,k,x,y,m,s,e;
int main(){

    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i][1] >> a[i][2];
    cin >> m;
    memset(f,0x7f,sizeof(f));        //初始化f数组为最大值
    for (i = 1; i <= m; i++)                           //预处理出x、y间距离
    {
      	cin >> x >> y;
      	f[y][x] = f[x][y] = sqrt(pow((a[x][1]-a[y][1]),2)+pow((a[x][2]-a[y][2]),2));
        //pow(x,y)表示x^y，其中x,y必须为double类型，要用cmath库
    }
   	for(int i=1; i<=n; i++){
           f[i][i] = 0;
    }
    cin >> s >> e;
    for (k = 1; k <= n; k++)                     //floyed 最短路算法
    {
	  	//todo
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                f[i][j] = min(f[i][j],f[i][k]+f[k][j]);
            }
        }
	}
    printf("%.2lf\n",f[s][e]);
    return 0;
}
/*
5 
0 0 
2 0 
2 2 
0 2 
3 1 
5 
1 2 
1 3 
1 4 
2 5 
3 5 
1 5 
*/

