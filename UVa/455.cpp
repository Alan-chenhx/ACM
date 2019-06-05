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
		int ans=0;
		
		while(1){
			ans++;
			
			int flag=1;
			if(len%ans) continue;
			if(ans>len/2){
				cout<<endl;
				break;
			}
//			cout<<len-ans<<endl;
			for(int i=0;i<len;i++){
				if(s[i]!=s[i%ans]){
					flag=0;
					break;	
				}
			}
			if(flag){
				cout<<ans<<endl;
				break;
			}
		}
	}
	
	return 0;
} 
