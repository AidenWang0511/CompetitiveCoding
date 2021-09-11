#include<iostream> 
using namespace std; 
#define MAX 101 
  
int multiply(int x, int res[], int size) 
{ 
    int carry = 0;
    for (int i=0; i<size; i++) 
    { 
        int prod = res[i] * x + carry; 
        res[i] = prod % 10;   
        carry  = prod/10;     
    } 
    while (carry != 0) 
    { 
        res[size] = carry%10; 
        carry = carry/10; 
        size++; 
    } 
    return size; 
} 

void factorial(int n) 
{ 
    int res[MAX]; 
  	int num0 = 0;
    res[0] = 1; 
    int size = 1; 
    for (int num=2; num<=n; num++) 
        size = multiply(num, res, size); 
  
    for (int i=size-1; i>=0; i--){
        if(res[i] == 0) num0++;
	}
	cout<<num0<<endl;
} 


int main() { 
	int n;
	cin>>n;
    factorial(n); 
    return 0; 
} 
