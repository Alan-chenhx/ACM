#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	float n;
	cin>>n;
	double i=2;
	double sum=0;
	int k=0;
	while(1){
		k++;
		sum+=i;
		i*=0.98;
		if(sum>n){
			cout<<k;
			return 0;
		}
	}
	return 0;
} 
