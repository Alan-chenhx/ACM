#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	int x;
	cin>>x;
	int n;
	cin>>n;
	
	ll sum=0;
	for(int i=0;i<n;i++,x++,x%=8){
		if(x==0) x=1;
		if(x==6||x==7) continue;
		else sum+=250;
	}
	cout<<sum<<endl;
	return 0;
} 
