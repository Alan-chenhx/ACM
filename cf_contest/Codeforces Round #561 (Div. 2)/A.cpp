#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
int cnt[26]={0};
long long com[101][3]={0};
long long comb(int n,int c){
	if(n==0) return 0;
	if(n==1) return 0;
	long long ans=1;
	for(int i=1;i<=n;i++){
		ans*=i;
	}
	for(int i=1;i<=c;i++){
		ans/=i;
	}
	for(int i=1;i<=(n-c);i++){
		ans/=i;
	}
	return ans;
}
void initial(){
	com[0][0]=0;
	com[0][1]=0;
	com[0][2]=0;
	com[1][0]=0;
	com[1][1]=1;
	com[1][2]=0;
	com[2][0]=0;
	com[2][1]=2;
	com[2][2]=1;
	for(int i=3;i<101;i++){
		com[i][1]=i;
		com[i][2]=com[i-1][1]+com[i-1][2];
	}
}
int main(){
	IOS;
	int n;
	cin>>n;
	initial();
//	cout<<n;
	for(int i=0;i<n;i++){
		string temp;
		cin>>temp;
		cnt[(int)(temp[0]-'a')]++;
//		cout<<temp[0]<<endl;
	}
	long long ans=0;
	for(int i=0;i<26;i++){
//		cout<<ans;
		ans+=(com[cnt[i]/2][2]+com[cnt[i]-cnt[i]/2][2]);
	}
	cout<<ans;
	return 0;
} 
