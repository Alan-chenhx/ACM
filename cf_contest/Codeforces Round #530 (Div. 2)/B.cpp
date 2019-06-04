#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a;
	cin>>a;
	for (long long int i=1;i<50000;i++)
	{
		if(a<=(i*i)) 
		{
			cout<<i+(a+i-1)/i;
			return 0;
		}
	}
}
