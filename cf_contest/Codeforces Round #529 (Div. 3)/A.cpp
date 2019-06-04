#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n;
	cin>>n;
	cin>>s;
	int p=0;
	for(int i=1;p<n;i++)
	{
		
		cout<<s[p];
		p=p+i;
	}
	return 0;
 } 
