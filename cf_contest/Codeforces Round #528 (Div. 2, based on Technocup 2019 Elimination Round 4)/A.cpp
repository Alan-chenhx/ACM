#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int l=s.length();
	int mid=l/2+l%2-1;
	
	for (int i=0;i<l-mid;i++)
	{
		if(i==0) {
		cout<<s[mid];
		continue;
		}	
		else cout<<s[mid+i];
		if((mid-i)>=0) cout<<s[mid-i];
	}
	return 0;
 } 
