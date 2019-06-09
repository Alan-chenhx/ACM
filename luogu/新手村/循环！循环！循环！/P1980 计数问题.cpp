#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	int n;
	int x;
	cin>>n>>x;
	ll sum=0;
	for(int i=1;i<=n;i++){
		int temp=i;
		while(temp){
			if(temp%10==x) sum++;
			temp/=10;
		}
	}
	cout<<sum;
	return 0;
} 
