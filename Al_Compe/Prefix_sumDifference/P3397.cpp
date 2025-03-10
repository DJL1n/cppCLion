#include <bits/stdc++.h>
using namespace std;
int D[5000][5000];
int main(){
    int n,m;    scanf("%d%d",&n,&m);
    while (m--){
        int x1,y1,x2,y2;    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        D[x1][y1]+=1;   D[x2+1][y1]-=1;
        D[x1][y2+1]-=1; D[x2+1][y2+1]+=1;
    }
    for (int i=1;i<=n;++){
        for (int j=1;j<=n;++j){
            D[i][j]+=D[i-1][j]+D[i][j-1]-D[i-1][j-1];
            printf("%d",D[i][j]);
        }
        printf("\n");
    }
    return 0;
}