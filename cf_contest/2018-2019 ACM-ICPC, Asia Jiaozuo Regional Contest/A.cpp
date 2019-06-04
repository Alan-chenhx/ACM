#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int a;
	cin>>a;
	int b;
	for (int i;i<a;i++)
	{
		int flag=0;
		for(int j=0;j<4;j++)
		{
			cin>>b;
			if(b>0) flag++;
		}
		if(flag==0) cout<<"Typically Otaku"<<endl;
		if(flag==1) cout<<"Eye-opener"<<endl;
		if(flag==2) cout<<"Young Traveller"<<endl;
		if(flag==3) cout<<"Excellent Traveller"<<endl;
		if(flag==4) cout<<"Contemporary Xu Xiake"<<endl;
		
		
	}
	return 0;
 } 
