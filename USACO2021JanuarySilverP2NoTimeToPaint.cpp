#include <iostream>
using namespace std;
 
#define MAX_N 100000
int N, Q, min_since_last[26], p[MAX_N+1], s[MAX_N+2];
 
int main(void)
{
  string s;
  cin >> N >> Q >> s;
 
  for (int c=0; c<26; c++) min_since_last[c] = -1;
  for (int i=1; i<=N; i++) {
    int curchar = s[i-1] - 'A'; 
    for (int c=0; c<26; c++) min_since_last[c] = min(curchar, min_since_last[c]);
    p[i] = p[i-1];
    if (min_since_last[curchar] < curchar) p[i]++;
    min_since_last[curchar] = curchar;
  }
 
  for (int c=0; c<26; c++) min_since_last[c] = -1;
  for (int i=N; i>=1; i--) {
    int curchar = s[i-1] - 'A'; 
    for (int c=0; c<26; c++) min_since_last[c] = min(curchar, min_since_last[c]);
    s[i] = s[i+1];
    if (min_since_last[curchar] < curchar) s[i]++;
    min_since_last[curchar] = curchar;
  }
 
  for (int i=0; i<Q; i++) {
    int x, y;
    cin >> x >> y;
    cout << p[x-1] + s[y+1] << "\n";
  }
}