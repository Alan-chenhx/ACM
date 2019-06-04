#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
ll a[100005];
int main(){
	IOS;
	int n;
	cin>>n;
	int odd=0;
	int even=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2) odd++;
		else even++;
	}
//	cout<<odd<<even;
	if(odd&&even){
		sort(a,a+n);
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
} 
