#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	string text;
	cin>>text;
	n=text.length();
	int count=0;
	for(int i=0;i<n;i++)
	{
	
		if(text[i]=='Q') 
		{
	
			for(int j=i;j<n;j++)
			{
				if(text[j]=='A')
				{
			
					for(int k=j;k<n;k++)
					{
						if(text[k]=='Q')
						{
							count++;
						}
					}
				 } 
			}
		}
	}
	cout<<count;	
}
