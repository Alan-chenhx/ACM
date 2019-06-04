#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=0;
	long long int n;
	cin>>n;
	{
		int k=2;
		cout<<1<<" ";
		for (int i=n/2;k<n/2;k++)
		{
			i=n/k; 
			if(n%i==0)
			{
				int m=n/i;
				cout<<m+i*(m*(m-1)/2)<<" ";
			}
			
		}
	}
	return 0;
}
