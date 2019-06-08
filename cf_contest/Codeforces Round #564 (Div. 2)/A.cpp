#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	int x,y,z;
	cin>>x>>y>>z;
	if((x-y-z)>0) cout<<"+";
	else if((x-y+z)<0) cout<<"-";
	else if(z==0&&(x==y)) cout<<"0";
	else cout<<"?";
	return 0;
} 
