#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"

int main(){
	IOS;
	long long a,b,c;
	cin>>a>>b>>c;
	cout<<(2ll*c+2ll*min(a,b)+(a!=b)); 
} 
