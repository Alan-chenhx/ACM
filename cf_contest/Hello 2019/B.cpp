#include<bits/stdc++.h>
using namespace std;
struct Nod
{
	int num;
	int sum;
};
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	Nod temp={0,0};
	queue<Nod> que;
	que.push(temp);
	while(que.size())
	{
		temp=que.front();
		que.pop();
		if(temp.num==n&&temp.sum%360==0) 
		{
			cout<<"YES";
			return 0;
		}
		if(temp.num<n)
		{
			que.push({temp.num+1,temp.sum+a[temp.num]});
			que.push({temp.num+1,temp.sum-a[temp.num]});
		}
	}
	cout<<"NO";
}
