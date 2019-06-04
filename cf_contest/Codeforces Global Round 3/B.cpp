#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"

long long a[200005]={0};
long long b[200005]={0};

int main(){
	IOS;
	int n,m;
	int k;
	long long ta,tb;
	cin>>n>>m>>ta>>tb>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
		a[i]+=ta;
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	if(k==n||k==m){
		cout<<"-1";
		return 0;
	}
	int ai=0,bi=0;
	int s=0;
	for(;bi<m;bi++){
		if(b[bi]>=a[ai]) break;
	}
//	s=(a[0]==min(a[0],b[0]));
	while(k--){
		if(s==0){
			for(;)
		}		
	}
} 
