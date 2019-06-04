#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	int k;
	cin>>n>>k;
	for(int i=(k-1);i>0;i--)
	{
		if((n%i)==0) {
		cout<<(n/i)*k+i;
		break;
	}
	}
	return 0;
}
