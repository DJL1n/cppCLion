#include <bits/stdc++.h>
using namespace std;
//无环图最短路
#define maxn 510;
int g[max][maxn],f[maxn],n;
bool done[maxn];

int dag_path(int x){
    if (done[x])return f[x];
    for (int i=1;i<=n;++i)if(g[i][x])f[x]=max(f[x],solve(i)+g[i][x]);
    done[x]=true;
    return f[x];
}