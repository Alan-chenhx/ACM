#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	int _min=0;
	int ans=0;
	for(int i=1;i<=7;i++){
		int a,b;
		cin>>a>>b;
		if((a+b)>max(_min,8)) {
			_min=(a+b);
			ans=i;	
		}
		
	}
	cout<<ans;
	return 0;
} 
