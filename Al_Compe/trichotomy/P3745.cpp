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
    if (A<B)    return min(x,y)*A+(y-min(x,y))*B;
    else return y*B;
}

ll calc2(int p){
    ll sum=0;
    for (int i=1;i<=n;i++)
        if (t[i]<p) sum +=(p-t[i])*C;
}

int main(){
    cin>>A>>B>>C>>n>>m;
    for (int i=1;i<=n;i++)  cin>>t[i];
    for (int i=1;i<=m;i++)  cin>>b[i];
    sort(b+1,b+m+1);    sort(t+1,t+n+1);
    if (C>=1e16){cout<<calc1(t[i])<<end;return 0;}
    ans=1e16;
    int l=1,r=N;
    while (r-1>2){
        int mid1 = 1+(r-1)/3;   int mid2=r-(r-1)/3;
        ll c1=calc1(mid1)+calc2(mid1);
        ll c2=calc1(mid2)+calc2(mid2);
        if (c1<=c2) r=mid2;
        else    l=mid1;
    }
    for (int i=1;i<=r;i++){
        ll x=calc1(i)+calc2(i);
        ans=min(ans,x);
    }

    cout<<ans<<endl;
    return 0;
}