#include <bits/stdc++.h>
using namespace std;
int x,n,m;

set<int> sum;
int main(){
    while(~scanf("%d%d",&n,&m)){
        sum.clear();//这里是因为sum是全局变量所以需要清空
        for (int i=0;i<n;i++){
            scanf("%d",&x);
            sum.insert(x);
        }
        for (int i=0;i<n;i++){
            scanf("%d",&x);
            sum.insert(x);
        }
        for (set<int>::iterator it =sum.begin();it!=sum.end();it++){
            if (it!=sum.begin()){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}