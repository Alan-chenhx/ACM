#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
ll cal(ll n,ll k){
	if(n==0) return 0;
	ll sum=0;
	ll temp=n/k;
	sum+=(n-temp*k);
	sum+=(temp!=0);
	sum+=cal(temp,k);
	return sum;
}
int main(){
	IOS;
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll sum=0;
		sum=cal(n,k);
		cout<<sum<<endl;
	}
	 
	
	return 0;
} 
