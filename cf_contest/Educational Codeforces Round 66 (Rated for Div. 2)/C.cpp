#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int a[200005];

int main(){
	IOS;
	int t;
	cin>>t;
	while(t--){
	
		int n;
		int k;
		
		cin>>n>>k;
		
		int _min=INT_MAX;
		int flag=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(i>=(k+1)){
				int temp=(a[i]-a[i-k]);
				if(temp<=_min){
					_min=temp;
					flag=(i-k);
				}
			}
		}
		cout<<(a[flag+k]+a[flag])/2<<endl;
	}
	
	return 0;
} 
