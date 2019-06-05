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
		int n;
		cin>>n;
		n=n+1;
		int a[10]={0};
		while(n--){
			int temp=n;
//			cout<<n;
			
			while(temp){
//				cout<<temp;
				a[temp%10]++;
				temp/=10;
			}
		}
		for(int i=0;i<10;i++){
			cout<<a[i];
			if(i!=9) cout<<" ";
		}
		cout<<endl;
	} 
	
	return 0;
} 
