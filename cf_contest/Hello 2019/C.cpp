#include<bits/stdc++.h>
using namespace std;
long int l[100050]={0};
long int r[100050]={0};
int main()
{
	int n;
	cin>>n;
	string str;
	
	stack<char> s;
	for (long int i=0;i<n;i++)
	{
		cin>>str;
		for (long int j=0;j<str.size();j++)
		{
			if(str[j]=='(') s.push(j);
			else if(str[j]==')')
			{
				if(!s.empty()) s.pop();
			} 
		} 
		while(!s.empty())
		{
			l[i]++;
			s.pop();
		}
		for (long int j=str.size();j>=0;j--)
		{
			if(str[j]==')') s.push(j);
			else if(str[j]=='(')
			{
				if(!s.empty()) s.pop();
			} 
		} 
			while(!s.empty())
		{
			r[i]++;
			s.pop();
		}

		if(l[i]!=0&&r[i]!=0) l[i]=-1,r[i]=-1;
		else if(l[i]==0&&r[i]!=0) l[i]=-1;
		else if(l[i]!=0&&r[i]==0) r[i]=-1;
		else if(l[i]==0&&r[i]==0) l[i]=-2,r[i]=-2;

	}
	sort(l,l+n);
	sort(r,r+n);
	int count =0;
	int flag=0;
	for (int i=0,j=0;i<n,j<n;i++)
	{
		if(l[i]==-2)
		{
				flag++;
				continue;
		}
		if(l[i]==-1) continue;
		for (;j<n;)
		{
			if((l[i]-r[j]) ==0) 
			{
				count++;
				j++;
				break;
			}else if(l[i]<r[j])
			{
				break;
			}
			j++;
		}
	}
	
	cout<<count+flag/2<<endl;
	return 0;
}
