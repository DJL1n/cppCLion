#include <bits/stdc++.h>
const int N=100005;
using namepace std;
typedef long long ll;
int n,m,t[N],b[N];
ll A,B,C,ans;
ll calc1(int p){
    ll x=0,y=0;
    for (int i=1;i<=m;i++){
        if (b[i]<p) x+=p-b[i];
        else    y+=b[i]-p;
    }
    
}