#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x1,y1,x2,y2,x3,y3;
	int num=0;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	int x,y;
	x=x1+x2+x3-max(max(x1,x2),x3)-(min(min(x1,x2),x3));
	y=y1+y2+y3-max(y1,max(y2,y3))-min(min(y1,y2),y3);

	num=abs(x1-x)+abs(y1-y)+abs(x2-x)+abs(y2-y)+abs(x3-x)+abs(y3-y)+1;
	cout<<num<<endl;
	while(x1!=x)
	{
		cout<<x1<<" "<<y1<<endl;
		if(x<x1) x1--;
		else x1++;
	}
	while(y1!=y)
	{
		cout<<x1<<" "<<y1<<endl;
		if(y1>y) y1--;
		else y1++;
	}
		while(x2!=x)
	{
		cout<<x2<<" "<<y2<<endl;
		if(x<x2) x2--;
		else x2++;
	}
		while(y2!=y)
	{
		cout<<x2<<" "<<y2<<endl;
		if(y2>y) y2--;
		else y2++;
	}
			while(x3!=x)
	{
		cout<<x3<<" "<<y3<<endl;
		if(x<x3) x3--;
		else x3++;
	}
		while(y3!=y)
	{
		cout<<x3<<" "<<y3<<endl;
		if(y3>y) y3--;
		else y3++;
	}
	cout <<x<<" "<<y<<endl;
	 return 0;
}
