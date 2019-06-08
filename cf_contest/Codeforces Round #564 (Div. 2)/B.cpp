#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	int n;
	cin>>n;
	cout<<(n/2+1)<<endl;
	for(int i=1;i<=n;i++){
		if(i%2==1) cout<<((i+1)/2)<<" "<<((i+1)/2)<<endl;
		else cout<<((i+1)/2)<<" "<<((i+1)/2+1)<<endl;
	}
	return 0;
} 
