#include <bits/stdc++.h>
using namespace std;

long long N,M,K,arr[1000005];
bool flag[1000005],track = false;;

void f(){
	track = true;
	memset(flag, false, N+1);
	long long total = N*(N+1)/2;
	long long counter = total-K;
	flag[1] = true;
	long long st = 1, cur = N+1;
	for(long long i=1; i<=counter; i++){
		cur--;
		if(cur == st){
			flag[st+1] = true;
			st++;
			cur = N;
		}
	}
	flag[cur] = true;
	
}

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
    
    cin>>N>>M>>K;
    if(M==2){
    	if(K>2*N-1 || K<N){
    		cout<<-1<<endl;
    		return 0;
		}
		
		for(long long i=1; i<=N; i++){
			arr[i] = 1;
		}
		long long counter = K-N;
		bool flag = false;
		if(counter%2 == 1){
			arr[1] = 2;
			flag = true;
		}
		counter /= 2;
		//if(N==3){
		//	arr[2] = 2;
		//}else{
			if(N%2 == 0){
				for(long long i=1; i<=counter; i++){
					long long index = 2*i+1;
					arr[index] = 2;
				}
			}else{
				for(long long i=1; i<=counter; i++){
					long long index = 0;
					if(flag){
						index = 2*i+1;
					}else{
						index = 2*i;
					}
					arr[index] = 2;
					
				}
			}
			
		//}
	}else if(M==N){
		if(K> (N+1)*N/2 || K<N){
			cout<<-1<<endl;
			return 0;
		}
		f();
	}
	for(int i=1; i<=N; i++){
		if(track){
			if(flag[i]){
				arr[i] = 1;
			}else{
				arr[i] = i;
			}
		}else{
			
		}
		cout<<arr[i]<<' ';
	}

    return 0;
}
