#include <bits/stdc++.h>
using namespace std;

const int maxn=10000;
bitset<1010>s[maxn];
int main(){
    int N,Q,num,x,y;
    scanf("%d",&N);
    for (int i=0;i<=N;i++){
        scanf("%d",&num);
        while(num--){
            scanf("%d",&x);
            s[x][i]=1;
        }
    }
    scanf("%d",&Q);
    while(Q--){
        scanf("%d%d",&x,&y);
        if ((s[x]&s[y]).count())
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}