#include <bits/stdc++.h>
using namespace std;
const int maxn=1000;
int n,m;
 
deque<int> d[maxn];
//这个读写的优化真牛逼
//我在这边浅浅记录一下
//cin要考虑流缓冲，慢；scanf不需要流，但是需要格式化，依然消耗时间
//getchar()最底层，因此更适合读取大量的数据
//补充一点，printf的效率也高于cin
void read(int &x){//注意这个针对的单个数字，比如123
    char ch=getchar();
    x=0;
    //原来c++里面的for循环不需要三个部分都写，这次初始化已经在之前完成了所以不用写
    //之前还有最后一个部分不写，就是再赋值的部分，那是因为用的是迭代器
    for (;ch<'0'||ch>'9';ch=getchar());//这里是排除所有的非数字字符，可写成while形式
    for (;ch>='0'&&ch<='9';ch=getchar()) x=x*10+ch-'0';//这里是把数字一位一位的提取出来，比如第一次1，第二次12，第三次123
}

 int main(){
    while(~scanf("%d%d",&n,&m)){
        for (int i=0;i<=n;i++)
            d[i].clear();
        int k,u,v,w;
        while(m--){
            read(k);
            switch(k){
                case 1:
                    read(u),read(w),read(v);
                    if (w==0){
                        d[u].push_front(v);
                    }else{
                        d[u].push_back(v);
                    }
                    break;
                case 2:
                    read(u),read(w);
                    if (d[u].empty()) printf("-1\n");
                    else{
                        if (w==0){
                            printf("%d\n",d[u].front());
                            d[u].pop_front();
                        }else{
                            printf("%d\n",d[u].back());
                            d[u].pop_back();
                        }
                    }
                    break;
                case 3:
                    read(u),read(v),read(w);
                    if(w)
                        d[u].insert(d[u].end(),d[v].rbegin(),d[v].rend());
                    else
                        d[u].insert(d[u].end(),d[v].begin(),d[v].end());
                    d[v].clear();
                    break;
            }
        }
    }
 }