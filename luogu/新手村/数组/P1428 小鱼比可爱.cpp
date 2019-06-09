#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	int dp[101]={0};
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=i;j>=0;j--){
			if(a[i]>a[j]) {
				dp[i]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<dp[i];
		if((i+1)!=n) cout<<" ";
	}	
	return 0;
} 
