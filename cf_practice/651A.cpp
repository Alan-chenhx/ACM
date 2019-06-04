#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2;
	cin>>a1>>a2;
	int s;
	cout<<((a1+a2)==2?0:(a1+a2-2-!((a1-a2)%3)));
}
