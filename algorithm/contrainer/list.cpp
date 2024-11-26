//报数问题
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,n;
    list<int> a;
    list<int>::iterator it;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        a.clear();
        int k=2;
        for (int i;i<=n;i++)
            a.push_back(i);
        while(a.size()>3){
            int cnt=1;
            for (it = a.begin(); it != a.end(); ) {
                if (cnt++ % k == 0) {
                    it = a.erase(it);  // 更新迭代器
                } else {
                    ++it;  // 正常递增
                }
            }
            k=(k==2?3:2);
        }
        for (it=a.begin();it!=a.end();it++){
            if(it!=a.begin()) printf(" ");
            printf("%d",*it);
        }
        cout<<endl;
    }
    return 0;
}