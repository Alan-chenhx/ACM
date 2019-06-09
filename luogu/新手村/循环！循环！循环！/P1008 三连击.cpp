#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
bool a[10];
void initial(){
	for(int i=1;i<=9;i++){
		a[i]=0;
	}
}
int main(){
	IOS;
	initial();
	a[0]=1;
	for(int i=100;(3*i)<1000;i++){
		bool flag=0;
		initial();
		int it=(2*i);
		int its=(3*i);
		int temp=i;
		while(temp){
			if(!(a[temp%10])) a[temp%10]++;
			else {
				flag=1;
				break;
			}
			temp/=10;
		}
//		cout<<i;
		if(flag) continue;
		temp=it;
		while(temp){
			if(!(a[temp%10])) a[temp%10]++;
			else {
				flag=1;
				break;
			}
			temp/=10;
		}
		if(flag) continue;
		temp=its;
		while(temp){
			if(!(a[temp%10])) a[temp%10]++;
			else {
				flag=1;
				break;
			}
			temp/=10;
		}
		
		if(flag) continue;
		else{
			cout<<i<<" "<<it<<" "<<its<<endl;
		}
	}
	return 0;
} 
