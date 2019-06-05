#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	int a[12],i,m=0,n=0;
    for(int i=0;i<=11;i++)
		cin>>a[i];
    for(int i=0;i<=11;i++){
        m=((n+300-a[i])/100)*100+m;
        n=(n+300-a[i])-(n+300-a[i])/100*100;
    if(n<0){
            cout<<-(i+1);
            return 0;
            }
        }
        cout<<m*1.2+n<<endl;
	
	return 0;
} 
