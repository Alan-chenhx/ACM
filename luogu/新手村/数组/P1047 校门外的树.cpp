#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);std::cout.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
//	cout<<"11";
	int L;
	int m;
	cin>>L>>m;
	bool a[L+1];
	
	memset(a,1,L+1);
//	cout<<L;
	for(int i=0;i<m;i++){
//		cout<<i;
		int l,r;
		cin>>l>>r;
		for(int j=l;j<=r;j++){
			a[j]=0;
		}		

	}
	int sum=0;
	for(int i=0;i<L+1;i++){
		sum+=a[i];
	}
	cout<<sum;
	return 0;
} 
