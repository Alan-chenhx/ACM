#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
struct point{
	ll sum;
	int num;
};
bool cmp(point p1, point p2) 
{ 
    return (p1.sum < p2.sum); 
}
 
int a[300005]={0};


ll cal(int n,int k){
	if(k==0) return 0;
	ll ans=0;
	point p[n];
	ll s=0;
	for(int i=n-1;i>=0;i--){
		s+=a[i];

		p[i].sum=s;

		p[i].num=i; 
	}

	
	if(k==1){
		ans=p[0].sum;

		return ans;
	}
	sort(p,p+n,cmp);
	int temp=0;
	for(int i=n-1;i>=0;i--){
		if(p[i].num>=(k-1)){
			ans+=(k*p[i].sum);
			temp=p[i].num;
			break;
		}
	}

	return ans+=cal(temp,k-1);
}
int main(){
	IOS;
	int n;
	int k;
	cin>>n>>k;

	ll ans;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<cal(n,k)<<endl;
	return 0;
} 
