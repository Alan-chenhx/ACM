#include<bits/stdc++.h>
using namespace std;
struct tree
{
	int a;
	long long int s;
	int p;
};

int main()
{
	int n;
	cin>>n;
	tree t[n];
	t[0].p=0;
	for (int i=1;i<n;i++)
	{
		cin>>t[i].p;
		t[i].p-=1;
		
	}	
	for (int i=0;i<n;i++)
	{
		cin>>t[i].s;
	}
	t[0].a=t[0].s;
	
	for (int i=1;i<n;i++)
	{
		if(t[i].s==-1) 
		{
			t[i].a=0;
			t[i].s=t[t[i].p].s;
		}
	}

	
	for (int i=1;i<n;i++)
	{

			t[i].a=t[i].s-t[t[i].p].s;
			if(t[i].a<0) 
			{
				cout<<-1;
				return 0;
			}
		
	}
	long long int sum=0;
	for (int i=0;i<n;i++)
	{
		sum=sum+t[i].a;
	}
	cout<<sum;
}
