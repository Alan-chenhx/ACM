#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll
ll Euler(ll n){
    ll res=n;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0) res=res/i*(i-1);
        while(n%i==0) n/=i;
    }
    if(n>1) res=res/n*(n-1);
    return res;
}
int main(){
	IOS;
	
} 
