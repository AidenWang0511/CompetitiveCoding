#include<bits/stdc++.h>
using namespace std;
  
void primeFactors(unsigned long long n) 
{ 
    while (n % 2 == 0) 
    { 
        cout << 2 << " "; 
        n = n/2; 
    } 
  
    for (unsigned long long i = 3; i <= sqrt(n); i = i + 2) 
    { 
        while (n % i == 0) 
        { 
            cout << i << " "; 
            n = n/i; 
        } 
    } 
  
    if (n > 2) 
        cout << n << " "; 
} 
  
int main() 
{ 
    unsigned long long n = 100; 
    primeFactors(n); 
    return 0; 
} 
  
