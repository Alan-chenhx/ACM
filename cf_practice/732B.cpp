#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[501];
	int n,k;
	cin>>n>>k;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sum=0;
	for (int i=1;i<n;i++)
	{
		int c;
		c=a[i]+a[i-1];
		if(c<k) 
		{
		a[i]=a[i]+(k-c);
		sum=sum+(k-c);
		}
	}
	cout<<sum<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	} 
	return 0;
}
