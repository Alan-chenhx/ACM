#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	stack<int> a;
	while(1){
		int temp;
		cin>>temp;
		if(temp==0) break;
		else a.push(temp);
	}
	while(!a.empty()){
		cout<<a.top();
		a.pop();
		if(!a.empty()) cout<<" ";
	}
	return 0;
} 
