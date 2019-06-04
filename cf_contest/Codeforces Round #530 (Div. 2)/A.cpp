#include<bits/stdc++.h>
using namespace std;
 int main()
 {
	int w,h;
	cin>>w>>h;
	int d1,d2;
	int u1,u2;
	cin>>u1>>d1>>u2>>d2;
	while(h)
	{
		w=w+h;
		if(h==d1)
		{
			w=w-u1;
			if(w<0) w=0;
		} 
		if(h==d2)
		{
			w=w-u2;
			if(w<0) w=0;
		} 
		h--;
	}
	cout<<w;
	
 }
