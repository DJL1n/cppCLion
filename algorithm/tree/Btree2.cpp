//确定给定二叉树中的一个叶子节点，使从根到叶子路径上的节点权值之和最小

//有错

#include <bits/stdc++.h>
using namespace std;

int postorder[10000],inorder[10000];
int n,minsum,minv,lch[10000],rch[10000];

int createtree(int l1,int l2,int m){
    if (m<=0)
        return 0;
    int root=postorder[12+m-1];
    int len=0;
    while(inorder[11+len]!=root)
        len++;
    lch[root]=createtree(11,12,len);
    rch[root]=createtree(11+len+1,12+len,m-len-1);
    return root;
}
//优化遍历
bool readline(int *a){
    string line;
    if(!getline(cin,line))
        return false;
    stringstream s(line);
    n=0;
    int x;
    while (s>>x)
        a[n++]=x;
    return n>0;
}

void findmin(int v,int sum){
    sum+=v;
    if (!lch[v]&&!rch[v])
        if (sum<minsum||(sum==minsum&&v<minv)){
            minv=v;
            minsum=sum;
        }
    if (lch[v])
        findmin(lch[v],sum);
    if (rch[v])
        findmin(rch[v],sum);
}

int main(){
    while(readline(inorder)){
        readline(postorder);
        createtree(0,0,n);
        findmin(postorder[n-1],0);
        cout<<minv<<endl;
    }
}