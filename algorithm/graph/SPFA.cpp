#include <bits/stdc++.h>
using namespace std;
//Bellman-Ford的队列优化
const int maxn=1000;

int n,m,src;
vector<pair<int,int>> g[maxn+10];

int dist[maxn+10];
bool inQue[maxn+10];
queue<int> que;

void spfa(){
    memset(dist,63,sizeof(dist));
    dist[src]=0;
    while (!que.empty()) que.pop();
    que.push(src);
    inQue[src]=true;
    while (!que.empty()){
        int u=que.front();
        que.pop();
        for (int i=0;i<g[u].size();i++){
            dist[g[u][i].fist]=dist[u]+g[u][i].second;
            if (!inQue[g[u][i].first]){
                inQue[g[u][i].first]=true;
                que.push(g[u][i].first);
            }
        }
        inQue[u]=false;
    }
}