#include<bits/stdc++.h>
using namespace std;

int  main()
{
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	int b[n];
	int c[n]={0};
	int temp;
	int k=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		
		memcpy(b,a,sizeof(a));
		temp=sum-b[i];
		b[i]=0;
		if(temp%2==0)
		{
			sort(b,b+n); 
			if(binary_search(b,b+n,temp/2)) 
			{
				count++;
				c[k]=i+1;
				k++;
			}
		}
	}
	cout<<count<<endl;
	for (int i=0;i<n;i++)
	{
		if(c[i]!=0) cout<<c[i]<<" ";
		else break; 
	}
}
