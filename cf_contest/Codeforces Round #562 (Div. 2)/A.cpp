#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"

int main(){
	IOS;
	int n;
	int a,b,x,y;
	cin>>n>>a>>x>>b>>y;
	while(1){
		a=(a+1)%n;
		b=(b-1);
		if(b==0) b=n;
		if(a==b){
			cout<<"YES"<<endl;
			return 0;
		}
		if(a==x||b==y) break;
	}
	cout<<"NO"<<endl;
	return 0;
} 
