#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int n,a,b,c,ans=2100000000,x,i;
int main(){
	IOS;
	cin>>n;
    for (;i<3;i++)
    {
        cin>>a>>b;
        x=ceil(n*1.0/a)*b;
        ans=min(x,ans);
    }
    cout<<ans; 
	return 0;
} 
