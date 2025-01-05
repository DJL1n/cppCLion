#include <bits/stdc++.h>
//双向静态链表
const int N=105;
struct node{
    int id;
    int preid,nextid;
}nodes[N];
int main(){
    int n,m;    scanf(" %d %d",&n,&m);//第一个空格是去除所有可能的所有的无效输入
    nodes[0].nextid=1;
    for (int i=1;i<=n;i++){
        nodes[i].id=i;
        nodes[i].preid=i-1;
        nodes[i].nextid=i+1;
    }
    nodes[n].nextid=1;
    nodes[1].preid=n;
    int now =1;
    while(n--){
        for (int i=1;i<m;i++) now =nodes[now].nextid;
        printf(" %d",nodes[now].id);
        int prev=nodes[now].preid,next=nodes[now].nextid;
        nodes[prev].nextid=nodes[now].nextid;
        nodes[next].preid=nodes[now].preid;
        now=next;
    }
    printf(" %d",nodes[now].nextid);
    return 0;
}
