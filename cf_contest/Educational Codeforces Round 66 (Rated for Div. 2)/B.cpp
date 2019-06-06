#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	const ll MAX=((1ll<<32)-1);
	int l;
	cin>>l;
	ll x=0;
	ll k=1;
	int a[100005];
	memset(a,1,100005);
	stack<int> q;
	queue<int> p;
	int t=0; 
	while(l--){
		string s;
		cin>>s;
		if(s=="add"){
			ll n=1;
			for(int i=0;i<t;i++){
				n*=a[i];
				if(n>MAX){
					cout<<"OVERFLOW!!!"<<endl;
				return 0;
				}
			}
			x+=(k*n);
			if(x>MAX){
				cout<<"OVERFLOW!!!"<<endl;
				return 0;
			}
		}
		if(s=="for"){
			cin>>a[t];
			t++;
		}
		if(s=="end"){
			t--;
		}
		
	}
	cout<<x<<endl;
	return 0;
} 
