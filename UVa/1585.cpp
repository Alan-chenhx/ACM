#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len=s.length();
		int a=0;
		ll sum=0;
		for(int i=0;i<len;i++){
			if(s[i]=='O'){
				a++;
				sum+=a;
			}else a=0;
		}
		cout<<sum<<endl;
	}
	return 0;
} 
