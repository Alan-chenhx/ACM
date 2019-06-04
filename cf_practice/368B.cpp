#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	int m;
	cin>>n>>m;
	int a[n];
	int b[n];
	int l;
	int count=1;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		if(!binary_search(a,a+i-1,a[i])) count++;
		b[i]=count;
		cout<<b[i];
	}
	for(int j=0;j<m;j++)
	{
		cin>>l;
		cout<<count-b[l-1]<<endl;
=======
int a[100005],b[100005];
int main() 
{
	int m,n;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int flag=0;
	for (int i=n-1;i>=0;i--)
	{
		if(b[a[i]]==0)
		{
			b[a[i]]=1;
			flag++;
		}
		a[i]=flag;
	}
	int l;
	for(int i=0;i<m;i++)
	{
		cin>>l;
		cout<<a[l-1]<<endl;
>>>>>>> 47e3e018b59f817790ea97f652b58a9a185d95a9
	}
	return 0;
}
