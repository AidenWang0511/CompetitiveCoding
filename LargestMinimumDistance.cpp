#include <bits/stdc++.h>
using namespace std;
bool check(int mid, int arr[], int n, int k) {
   int pos = arr[0];
   int elements = 1;
   for (int i=1; i<n; i++){
      if (arr[i] - pos >= mid){
         pos = arr[i];
         elements++;
         if (elements == k)
         return true;
      }
   }
   return 0;
}
int MaxMinDis(int arr[], int n, int k) {
   int res = -1;
   int left = arr[0], right = arr[n-1];
   while (left < right){
      int mid = (left + right)/2;
      if (check(mid, arr, n, k)){
         res = max(res, mid);
         left = mid + 1;
      }
      else
         right = mid;
   }
   return res;
}
int main() {
   int arr[100001], N, M;
   cin>>N>>M;
   for(int i=0; i<N; i++){
       cin>>arr[i];
   }
   sort(arr, arr+N);
   cout<<MaxMinDis(arr, N, M)<<endl;
   return 0;
}