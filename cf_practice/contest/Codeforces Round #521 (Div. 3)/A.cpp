#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	long long int a,b,k;
	for(int i=0;i<t;i++)
	{
		cin>>a;
		cin>>b;
		cin>>k;
		if(k%2==0) cout<<(a-b)*(k/2)<<endl;
		else cout<<(a-b)*(k/2)+a<<endl;
	 } 
}
