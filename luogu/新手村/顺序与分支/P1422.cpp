#include<bits/stdc++.h>
using namespace std;
#define IOS  std::ios::sync_with_stdio(false); std::cin.tie(0);
#define endl "\n"
typedef long long ll;
int main(){
	IOS;
	double a;
    cin>>a;
    if (a<=150){
        cout<<setprecision(1)<<fixed<<a*0.4463<<endl;
    }
    else if (a>=151 && a<=400){
        cout<<setprecision(1)<<fixed<<150*0.4463+(a-150)*0.4663<<endl;
    }
    else {
        cout<<setprecision(1)<<fixed<<150*0.4463+250*0.4663+(a-400)*0.5663<<endl;
    }
    return 0;
} 
