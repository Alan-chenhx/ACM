#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	double sum=0;
	int n;
	cin>>n;
	ll i=1;
	while(1){
		sum+=(double)(1/(double)i);
//		cout<<sum;
		if(sum>n) break;
		i++;
	}
	cout<<i<<endl;
	return 0;
} 
