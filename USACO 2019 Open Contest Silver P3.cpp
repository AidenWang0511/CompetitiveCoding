#include<bits/stdc++.h>
using namespace std;
#define MAX_N 100000
 
int N, M;
typedef pair<int,int> pii;
vector<pii> C;
vector<int> nbrs[MAX_N];
int moonet[MAX_N];
struct BB { int x1, x2, y1, y2; };
 
// Reursively visit cow i in moonet k with bounding box bb 
void visit(int i, int k, BB &bb)
{
  moonet[i] = k;
  bb.x1 = min(bb.x1, C[i].first);
  bb.x2 = max(bb.x2, C[i].first);
  bb.y1 = min(bb.y1, C[i].second);
  bb.y2 = max(bb.y2, C[i].second);
  for (int j : nbrs[i]) 
    if (moonet[j]==0) visit(j, k, bb);
}
 
int main(void)
{
  cin >> N >> M;
  pii p;
  for (int i=0; i<N; i++) {
    cin >> p.first >> p.second;
    C.push_back (p);
  }
  for (int i=0; i<M; i++) {
    cin >> p.first >> p.second;
    nbrs[p.first-1].push_back(p.second-1);
    nbrs[p.second-1].push_back(p.first-1);    
  }
 int K = 0, best = 999999999;
 for (int i=0; i<N; i++)     
    if (moonet[i]==0) {
      BB bb = {999999999,0,999999999,0};
      visit(i, ++K, bb);
      best = min(best, 2*(bb.x2-bb.x1+bb.y2-bb.y1));
    }
  cout << best << "\n";
  return 0;  
}
