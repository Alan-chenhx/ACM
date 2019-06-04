#include<bits/stdc++.h>
using namespace std;
int sumup(int a[], int i,int j)
{
	int s=0;
	for(int l=0;l<(j-i+1);l++)
	{
		s=s+a[l];
	}
	return s;
}
int main()
{
	int t;
	int n;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		cin>>n;
		int a[n-1];
		int sum=0;
		for (int j=0;j<n-1;j++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		int result=sum;
		for(int k=1;k<=n;k++)
		{
			if(k=1)
			{
				cout<<"0"<<" ";
				continue;
			}
			int m=(k+1)/2;
			for (int p=0;p<m;p++)
			{
				result=result+sumup(a,m,k-m);
				cout<<result<<" ";
			}
		}
	}
}
