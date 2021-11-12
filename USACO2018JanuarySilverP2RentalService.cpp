#include<bits/stdc++.h>
using namespace std;

struct shop{
    int quantity;
    int price;
};

long long maxProfit[100001];
int milk[100001];
shop arr[100001];
int rent[100001];

bool cmp(shop a, shop b){
    return a.price > b.price;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

	freopen("rental.in","r",stdin);
	freopen("rental.out","w",stdout);

    int N,M,R;
    cin>>N>>M>>R;
    for(int i=0; i<N; i++){
        cin>>milk[i];
    }
    sort(milk, milk+N, greater<int>());
    for(int i=0; i<M; i++){
        cin>>arr[i].quantity>>arr[i].price;
    }
    sort(arr, arr+M, cmp);
    for(int i=0; i<R; i++){
        cin>>rent[i];
    }
    sort(rent, rent+R, greater<int>());

    int index = 0;
    for(int i=0; i<N; i++){
        maxProfit[i+1] = maxProfit[i];
        while(index < M && milk[i] > 0){
            long long num = min(milk[i], arr[index].quantity);
            maxProfit[i+1] += num * arr[index].price;
            milk[i] -= num;
            arr[index].quantity -= num;
            if(arr[index].quantity == 0){
                index++;
            }
        }
    }

    int index2 = N-1;
    int rentIndex = 0;
    long long rentProfit = 0;
    while(index2 >= 0 && rentIndex < R){
        rentProfit += rent[rentIndex];
        maxProfit[index2] += rentProfit;
        rentIndex++;
        index2--;
    }

    long long ans = 0;
    for(int i=1; i<=N; i++){
        ans = max(ans, maxProfit[i]);
    }

    cout<<ans<<endl;

    return 0;
}