#include<bits/stdc++.h>
using namespace std;

int main()
{ 
	int n;
	cin>>n;
	int x[n];
	int q;
	for (int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	cin>>q;
	long long int m;
	sort(&x[0],&x[n]);
	int count=0;
	for(int i=0;i<q;i++)
	{
		cin>>m;
		cout<<upper_bound(x,x+n,m)-x<<endl;
		count=0;
	}	
	return 0;
} 
