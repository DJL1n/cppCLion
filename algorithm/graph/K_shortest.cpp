#include <bit/stdc++>
using namespace std;

const int INF=10000000000;
const int maxNode=1111;
const int maxEdge=111111;

int nodeCount,edgeCount,firstEdge[maxNode],to[maxEdge],length[maxEdge],nextEdge[maxEdge],dist[maxNode];
bool visit[maxNode];
priority_queue<pair<int,int>> heap;

void clearEdge(){
    nodeCount=edgeCount=0;
    memset(firstEdge,-1,sizeof(firstEdge));
}

void addEdge(int u,int v, int w){
    nodeCount=max(nodeCount,max(u,v));
    to[edgeCount]=v;
    length[edgeCount]=w;
    nextEdge[edgeCount]=firstEdge[u];
    firstEdge[u]=edgeCount ++;
}

int solve(vector<pair<pair<int,int>,int> &edges,int s,int t,int k){
    clearEdge();
    for (vector<pair<pair<int,int>,int>::vector)
}