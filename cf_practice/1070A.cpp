#include<bits/stdc++.h>
using namespace std;
bool data[505][5050];
int d,s;
struct Nod
{
	int d,s;
	string ans;
};
int main()
{
	
	cin>>d>>s;
	queue<Nod> que;
	
	data[0][0]=1;
	que.push({0,0,""});
	while(que.size())
	{
		Nod temp=que.front();
		que.pop();
		if(temp.s>s) continue;
		if(temp.d==0&&temp.s==s)
		{
			cout<<temp.ans<<endl;
			return 0;
		}
		for(int i=0;i<10;i++)
		{
			int dd=(temp.d*10+i)%d;
			int ss=temp.s+i;
			if(!data[dd][ss])
			{
				data[dd][ss]=1;
				que.push({dd,ss,temp.ans+char(i+'0')});
			}
		}		
	}
	cout<<-1<<endl;
	return 0;
}
