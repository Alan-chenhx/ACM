#include <cstdio>
#include <iostream>
#include <set>
using namespace std;
set<int> num; // �����ü��� 
set<int> res; // ȥ���ü��� 
int n,a[105],tmp;
int main(){
    
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i]; //������ֵ 
        num.insert(a[i]); //�ü��Ϸ������ 
    }
    for(int i=1;i<=n;++i){ //ö��a[i] 
        for(int j=i+1;j<=n;++j){ //ö��a[j] 
            int tmp=a[i]+a[j]; //����������tmp��������ö�ٵ�����֮�� 
            set<int>::iterator it=num.find(tmp); // ֱ���ڼ����в���tmp
            //ע�⣬find�������ص���һ��������������Ҫ��һ�����������洢find�ķ���ֵ
            if(it!=num.end()) { // ��find�У����û���ҵ������е�Ԫ�أ���ô���������ڼ��ϵ�ĩβ��
            //�������it���ڼ���ĩβ����ô˵��it�ڼ����г��ֹ� 
            res.insert(*it); //��ȥ�ؼ����в��� 
        }
        }
    }
    cout<<res.size();//ֱ�����������Ԫ������ 
    return 0;
}
