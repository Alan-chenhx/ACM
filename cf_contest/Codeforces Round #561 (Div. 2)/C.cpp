#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"

int main(){
	IOS;
	int a[200005];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		a[i]=abs(a[i]);
	}
	sort(a,a+n);
	long long ans=0;
	for(int i=0;i<n;i++){
		ans += upper_bound(a,a+n,2*a[i])-a-1-i;
	}
	cout<<ans;
	
} 
