#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a;
	for (a=1;(a*(a+1)/2<=n);a++);
	a--;
	cout<<a<<endl;
	int b=0;
	for(int i=1;i<a;i++)
	{
		b=b+i;
		cout<<i<<" ";
	}
	cout<<n-b;
}
