#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	string s;
	cin>>s;
	int b=1;
	int sum=0;
	for(int i=0;i<12;i++){
		if(s[i]=='-') continue;
		else {
			sum+=((s[i]-'0')*b);
			b++;
		}
	}
	if((sum%11==(s[12]-'0'))||(sum%11==10&&s[12]=='X')) cout<<"Right";
	else {
		for(int i=0;i<12;i++){
			cout<<s[i];
		}
		sum%11==10?cout<<'X':cout<<sum%11;
	}
	return 0;
} 
