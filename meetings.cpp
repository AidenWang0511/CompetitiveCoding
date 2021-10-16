#include <bits/stdc++.h>
using namespace std;

const int MAXN = 50001;

struct cow{
    int x,w,d;
} c[MAXN];

bool cmp(cow a, cow b){
    return a.x<b.x;
}
int n, L, tot, k, t, ans, f[MAXN];
int a[MAXN], r[MAXN]; // merge sort用的数组

bool check(int mid){
    int wsum = 0, l = 0, r = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (c[i].x + c[i].d * mid <= 0)
        {
            wsum += c[l].w;
            l++;
        }
        if (c[i].x + c[i].d * mid >= L)
        {
            wsum += c[r].w;
            r--;
        }
    }

    return 2 * wsum >= tot; // 不要写成wsum >= tot/2
}

void msort(int s, int t)
{
    if (s == t)
        return;
    int mid = (s + t) / 2;
    msort(s, mid);
    msort(mid + 1, t);
    int i = s, j = mid + 1, k = s;
    while (i <= mid && j <= t)
    {
        if (a[i] < a[j])
        {
            r[k] = a[i];
            i++;
        }
        else
        {
            r[k] = a[j];
            j++;
            ans += mid - i + 1; // 累加相等对和逆序对
        }
        k++;
    }
    while (i <= mid)
    {
        r[k] = a[i], k++, i++;
    }

    while (j <= t)
    {
        r[k] = a[j], k++, j++;
    }

    for (int i = s; i <= t; i++)
        a[i] = r[i];
}

int main(){
    // freopen("meetings.in","r",stdin);
    // freopen("meetings.out","w",stdout);
    ios::sync_with_stdio(false);
    cin>>n>>L;
    for(int i=0;i<n;i++){
        cin>>c[i].w>>c[i].x>>c[i].d;
        tot+=c[i].w;
    }
    sort(c,c+n,cmp);

    int left=0,right=L;
    while(left<=right){
        int mid=(left+right)>>1;
        if(check(mid)){
        	t=mid;
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    
    for(int i=0; i<n; i++) {
        a[i] = c[i].x + c[i].d * t;
    }

    msort(0, n-1);

    cout<<ans<<endl;
    return 0;
}
