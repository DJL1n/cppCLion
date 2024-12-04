#include <bits/stdc++>
using namespace std;

struct LogVar{
    int index;
    bool pre;
    logVar(int _index=0,bool _pre=false):index(_index),pre(_pre)
};

struct BinExp{
    LogVar p,q;
    BinExp(LogVar _p=LogVar(), LogVar _q=LogVar()):p(_p),q(_q){}
};

inline int get_value(int sol[MAXN], int n, int x){
    int r=x>n?x-n:x;
    if (sol[r]==-1)
        return -1;
    return x>n? !sol[r]:sol[r];
}

void dfs(int x){
    low[x]=dfn[x]=++id_cnt;
    
}