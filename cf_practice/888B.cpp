#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int l=0;
	int r=0;
	int u=0;
	int d=0;
	int count=0;
	cin>>n;
	string com;
	cin>>com;
	for (int i=0;i<n;i++)
	{
		if(com[i]=='L') l++;
		if(com[i]=='R') r++;
		if(com[i]=='U') u++;
		if(com[i]=='D') d++;
	}
	if(u<=d)
	{
		count=count+2*u;
	}else{
		count+=2*d;
	}
	if(l<=r)
	{
		count+=2*l;
	}else{
		count+=2*r;
	}
	cout<<count;
} 
