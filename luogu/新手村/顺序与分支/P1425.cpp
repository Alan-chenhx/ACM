#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<(c-a)-(b>d)<<" "<<d-b+(b>d)*60;
	
	return 0;
} 
