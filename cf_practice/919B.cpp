#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for (int i=19;;i=i+9)
	{
		int k=i;
		int s=0;
		while(k)
		{
			s=s+k%10;
			k=k/10;
		}
		if(s==10) a--;
		if(a==0) {
			cout<<i;
			return 0;
		}
	}
	
}
