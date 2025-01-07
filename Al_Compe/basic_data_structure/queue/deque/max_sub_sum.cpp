#include <bits/stdc++.h>
using namespace std;
// //贪心
// const int INF=0x7fffffff;
// int main(){
//     int t;cin>>t;
//     for (int i=1;i<=t;i++){
//         int n;cin>>n;
//         int maxsum=-INF;
//         int start=1,end=1,p=1;
//         int sum=0;
//         for (int j=1;j<=n;j++){
//             int a;cin>>a;sum+=a;
//             if (sum>maxsum){maxsum=sum;start=p;end=j;}
//             if (sum<0){
//                 sum=0;
//                 p=j+1;
//             }
//         }
//         printf("Case %d:\n",i);printf("%d %d %d\n",maxsum,start,end);
//         if (i!=t)cout<<endl;
//     }
//     return 0;
// }

// //动态规划
// int dp[100005];
// int main(){
//     int t;cin>>t;
//     for (int k=1;k<=t;k++){
//         int n;cin>>n;
//         for (int i=1;i<=n;i++) cin>>dp[i];
//         int start=1,end=1,p=1;
//         int maxsum=dp[1];
//         for (int i=2;i<=n;i++){
//             if (dp[i-1]+dp[i]>=dp[i])
//             dp[i]=dp[i-1]+dp[i];
//             else p=i;
//             if (dp[i]>maxsum){
//                 maxsum=dp[i];start=p;end=i;
//             }
//         }
//         printf("Case %d:\n",k);printf(" %d %d %d\n",maxsum,start,end);
//         if (k!=t)cout<<end;
//     }
// }

//dp+单调队列，滑动窗口类似的思路
deque<int> dq;
int s[100005];
int main(){
    int n,m;    scanf(" %d %d",&n,&m);
    for (int i=1;i<=n;i++)  scanf(" %lld",&s[i]);
    for (int i=1;i<=n;i++)  s[i]=s[i]+s[i-1];
    int ans=-1e8;
    dq.push_back(0);
    for (int i=1;i<=n;i++){
        while (!dq.empty() && dq.front()<i-m)dq.pop_front();
        if (dq.empty())     ans=max(ans,s[i]);
        else    ans=max(ans,s[i]-s[dq.front()]);
        while(!dq.empty() && s[dq.back()]>=s[i])dq.pop_back();
        dq.push_back(i);
    }
    printf(" %d\n",ans);
    return 0;
}