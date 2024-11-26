//没有障碍的棋盘上移动
#include <bits/stdc++.h>
using namespace std;
const int maxn=1000;
struct point {
    int x,y;
    int step;
};

int dx[8]={-2,-2,-1,-1,1,1,2,2};
int dy[8]={1,-1,2,-2,2,-2,1,-1};
bool vis[maxn][maxn];
int sx,sy,ex,ey,tx,ty,L;

int bfs(){
    if (sx==ex&&sy==ey) return 0;
    memset(vis,false,sizeof(vis));
    queue<point>Q;
    point start,node;
    start.x=sx;
    start.y=sy;
    start.step=0;
    Q.push(start);
    int step,x,y;
    while(!Q.empty()){
        start=Q.front(),Q.pop();
        x=start.x;
        y=start.y;
        step=start.step;
        for (int i=0;i<8;i++){
            tx=x+dx[i];
            ty=y+dy[i];
            if (tx==ex&&ty==ey) return step+1;
            if (tx>=0&&tx<=L&&ty>=0&&ty<L&&!vis[tx][ty]){
                node.x=tx;
                node.y=ty;
                node.step=step+1;
                Q.push(node);
                vis[tx][ty]=true;
            }
        }
    }
    return -1;
}

int main(){
    int N;
    cin>>N;
    for (int i=0;i<N;i++){
        cin>>L;
        cin>>sx>>sy;
        cin>>ex>>ey;
        cout<<bfs();
    }
    return 0;
}