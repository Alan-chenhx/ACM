#include<bits/stdc++.h>
using namespace std;

int f(long long int n,int count)
{
	int num=1;
	while(num<=n)
	{
		num=num*2;
	}
	count++;
	if(num>n&&num-num/2>0)
	f(n-num/2,count);
	return count;
}
int g(long long int n)
{
	int num=1;
	while(num<=n)
	{
		num=num*2;
	}
	cout<<num/2<<" ";
	if(num>n&&num-num/2>0)
	g(n-num/2);
}
int main()
{
	long long int a;
	int n;
	cin>>a>>n;
	int count=f(a,count);
	g(a);
	if(count==n)
	{
		cout<<"YES"<<endl;
		g(a);
	}else cout<<"NO"<<endl;
	return 0;
}
