#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y,b,r;
	cin>>y>>b>>r;
	if((b>=(r-1))&&(y>=(r-2))) cout<<3*r-3<<endl;
	else if((r>=(b+1))&&(y>=(b-1))) cout<<3*b<<endl;
	else cout<<3*y+3<<endl; 
}
