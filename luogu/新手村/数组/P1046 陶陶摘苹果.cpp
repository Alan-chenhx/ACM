#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	int a[10];
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	int k;
	cin>>k;
	k+=30;
	int sum=0;
	for(int i=0;i<10;i++){
		if(k>=a[i]) sum++;
	}
	cout<<sum<<endl;
	return 0;
} 
