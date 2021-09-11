#include <bits/stdc++.h>

using namespace std;

int parent[200001];
int m_rank[200001];

int find_set(int v) {
    if (parent[v] == v) {
        return v;
    }
    return parent[v] = find_set(parent[v]);
}

void union_set(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (m_rank[a] < m_rank[b]) {
        parent[a] = b;
    }
    else {
        parent[b] = a;
        if (m_rank[a] == m_rank[b]) {
            m_rank[a]++;
        }
    }
}

int main() {
    
    int N, M; cin >> N >> M;
    
    for (int i = 1; i <= N; i++) parent[i] = i;
    
    int cnt = 0;
    
    for (int i = 0; i < M; i++) {
        int a, b; cin >> a >> b;
        if (find_set(a) == find_set(b)) {
            if (++cnt > 1) {
                puts("NO");
                return 0;
            }
        }
        else {
            union_set(a, b);
        }
    }
    
    puts("YES");
    
    return 0;
}
