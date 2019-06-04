#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"

int main(){
	IOS;
	int n;
	cin>>n;
	int a[2*n];
	for(int i=0;i<2*n;i++){
		cin>>a[i];
	}
	sort(a,a+2*n);
	bool flag=0;
	for(int i=0;i<n;i++){
		if(a[i]!=a[i+n]) flag=1;
	}
	if(!flag){
		cout<<"-1";
		return 0;
	}else{
		for(int i=0;i<2*n;i++){
			cout<<a[i]<<" ";
		}
	}
	return 0;
} 
