#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	int n;
	cin>>n;
	ll p=-15;
	int sum=0;
	int ans=0;
	for(int i=0;i<n;i++){
		ll temp;
		cin>>temp;
		if(temp>p){
			sum++;
			p=temp;
		}else{
			ans=max(ans,sum);
			p=temp;
			sum=1;
		}
	}
	cout<<ans;
	return 0;
} 
