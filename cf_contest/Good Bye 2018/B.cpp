#include<bits/stdc++.h>
using namespace std;
long int x[1050];
long int y[1050];
long int a[1050];
long int b[1050];
struct Nod
{
	int x;
	int y;
	int k;
};
int main()
{
	int n;
	cin>>n;

	for (int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for (int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	queue<Nod> que;
	Nod temp;
	for (int j=0;j<n;j++)
	{
		temp={a[0]+x[j],b[0]+y[j],0};
		que.push(temp);	
	
	}
	while(que.size())
	{
		Nod temp;
		temp=que.front();
		if((temp.k+1)==n) cout<<temp.x<<" "<<temp.y<<endl;
		que.pop();
		
		for (int j=0;j<n;j++)
		{
			Nod temp2={temp.x,temp.y,temp.k+1};
			if((a[temp2.k]+x[j])==temp.x&&(b[temp2.k]+y[j])==temp.y) 
			{
				que.push(temp2);
			
			}
		}
	}
	
 
}
