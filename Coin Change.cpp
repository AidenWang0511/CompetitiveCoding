#include<bits/stdc++.h> 
using namespace std; 
int coins[10001], x, n; 

int minCoins(int m) 
{ 
    int table[10001]; 
    table[0] = 0; 
    for (int i=1; i<=x; i++) 
        table[i] = INT_MAX; 
    for (int i=1; i<=x; i++) 
    { 
        for (int j=0; j<m; j++) 
          if (coins[j] <= i) 
          { 
            int sub_res = table[i-coins[j]]; 
            if (sub_res != INT_MAX && sub_res + 1 < table[i]) 
                table[i] = sub_res + 1; 
          } 
    } 
    return table[x]; 
} 

int main() 
{ 
    cin>>x>>n;
    for(int i=0; i<n; i++){
        cin>>coins[i];
    }
    int m = sizeof(coins)/sizeof(coins[0]); 
    cout << minCoins(m) << endl;
    return 0; 
} 
