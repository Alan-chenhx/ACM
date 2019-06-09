#include <cstdio>
#include <iostream>
#include <set>
using namespace std;
set<int> num; // 查找用集合 
set<int> res; // 去重用集合 
int n,a[105],tmp;
int main(){
    
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i]; //输入数值 
        num.insert(a[i]); //用集合方便查找 
    }
    for(int i=1;i<=n;++i){ //枚举a[i] 
        for(int j=i+1;j<=n;++j){ //枚举a[j] 
            int tmp=a[i]+a[j]; //接下来定义tmp，它是所枚举的两数之和 
            set<int>::iterator it=num.find(tmp); // 直接在集合中查找tmp
            //注意，find函数返回的是一个迭代器，所以要用一个迭代器来存储find的返回值
            if(it!=num.end()) { // 在find中，如果没有找到集合中的元素，那么迭代器会在集合的末尾。
            //所以如果it不在集合末尾，那么说明it在集合中出现过 
            res.insert(*it); //在去重集合中插入 
        }
        }
    }
    cout<<res.size();//直接输出集合内元素数量 
    return 0;
}
