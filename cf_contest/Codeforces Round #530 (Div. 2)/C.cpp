#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int k;
	cin>>k;
	int l=str.length();
	int count=0;
	int counts=0;
	for (int i=0;i<l;i++)
	{
		if(str[i]=='?') count++;
		if(str[i]=='*') counts++; 
	}
	int n=l-2*count-2*counts;
	if((l-count-counts)<k&&counts==0){
		cout<<"Impossible";
		return 0;
	}
	if((n)>k){
		cout<<"Impossible";
		return 0;
	}
	n=l-count-counts;
	if(n==k)
	{
		for (int i=0;i<l;i++)
		{
			if(str[i]!='*'&&str[i]!='?') cout<<str[i]; 
		}
	}
	if(n>k)
	{
		
		int num=n-k;
		for (int i=0;i<l,num>0;i++)
		{
			if(str[i]=='*'||str[i]=='?') str[i-1]='*',num--;
		}
		for (int i=0;i<l;i++)
		{
			if(str[i]!='*'&&str[i]!='?') cout<<str[i]; 
		}
	}
	if(n<k)
	{
		int num=k-n;
		int flag=0;
		for (int i=0;i<l;i++)
		{
			
			if(str[i]!='*'&&str[i]!='?') cout<<str[i]; 
			if(str[i]=='*'&&flag==0)
			{
				for (int j=0;j<num;j++)
				cout<<str[i-1];
				flag++;
			}
		}
	}
	return 0;
}
