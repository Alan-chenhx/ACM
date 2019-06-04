#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
int p[300005]={0};
int main(){
	IOS;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i];		
	}
	queue<int> a;
//	int f=0;
	int cnt=0;
	for(int i=2;i<n;){
		if(p[i]==i){
			i++;
			continue;
		}else {
			int temp=p[i];
			if(abs(i-1)>=(n/2)){
				cnt++;
				a.push(i);
				a.push(1);
				swap(p[i],p[1]);
//				cout<<i<<1<<endl;
				if(temp==1) continue;
				if(temp-1>=(n/2)){
					cnt++;
					a.push(temp);
					a.push(1);
					swap(p[temp],p[1]);
//					cout<<i<<2<<endl;
					continue;
				}
				cnt++;
				a.push(n);
				a.push(1);
				swap(p[1],p[n]);
				
				cnt++;
				a.push(n);
				a.push(temp);
				
				swap(p[temp],p[n]);
//				cout<<i<<3<<endl;
			}else{
				cnt++;
				a.push(i);
				a.push(n);
				swap(p[i],p[n]);
////				cout<<i<<4<<endl;
//				for(int j=1;j<=n;j++){
//		cout<<p[j]<<" ";
//	}
//	cout<<endl;
				if(temp==n) continue;
				if(abs(temp-n)>=(n/2)){
					cnt++;
					a.push(temp);
					a.push(n);
					swap(p[temp],p[n]);
//					cout<<i<<5<<endl;
					continue;
				}
				cnt++;
				a.push(n);
				a.push(1);
				swap(p[1],p[n]);
				cnt++;
				a.push(1);
				a.push(temp);
				swap(p[temp],p[1]);
//				cout<<i<<6<<endl;
			}
		}
	}
	if(p[n]!=n){
		cnt++;
		a.push(1);
		a.push(n);
		swap(p[1],p[n]);
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
		cout<<a.front()<<" ";
		a.pop();
		cout<<a.front()<<endl;
		a.pop();
	}
//	for(int j=1;j<=n;j++){
//		cout<<p[j]<<" ";
//	}
//	cout<<endl;
	return 0;
} 
