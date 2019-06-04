#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
ll a[100005];
bool b[100005]={0};
void initial(){
	for(int i=0;i<100005;i++){
		a[i]=1;
		if(i%2==0) b[i]=1;
	}
}
bool prime[100005]={0};

void pu(int n){
	for(int i=n;i<100005;i+=n){
//		cout<<1;
		prime[i]=1;
	}
}
int co(int n){
	for(int i=n+1;i<100005;i++){
		if(prime[i]==0) {
//			cout<<1;
			pu(i);
			return i;
		}
	}
}

int main(){
	IOS;
	initial();
	int n;
	cin>>n;
	int p=0;
	int cop=2; 
	for(int i=2;i<=n;i++){
		if(b[i]==0){
			for(int j=i;j<=n;j+=i){
				if(b[j]!=1){
					a[j]=cop;
					b[j]=1;
				}
			}
			cop++;
		}
	}
	for(int i=2;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
} 
