#include<bits/stdc++.h>
using  namespace std;

int main()
{
	int n;
	long long int a=0;
	long long int temp;
	int count=0;
	int count_temp=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if(temp>a) {
			count++;
		}else{
			if(count>count_temp)
			{
				count_temp=count;
				count=1;
			}else{
				count=1;
			}
		} 
		a=temp;
	} 
	if(count>count_temp) count_temp=count;
	cout<<count_temp;
} 
