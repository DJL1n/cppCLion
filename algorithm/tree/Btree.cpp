#include <bits/stdc++.h>
using namespace std;
typedef struct Bnode{
    char data;
    Bnode *lchild,*rchild;
}Bnode, *Btree;

//创建二叉树
void createTree(Btree &T){
    char check;
    T=new Bnode;
    cout<<"请输入节点信息："<<endl;
    cin>>T->data;
    cout<<"是否添加"<<T->data<<"的左孩子？（Y/N）"<<endl;
    cin>>check;
    if (check=='Y')
        createTree(T->lchild);
    else
        T->lchild=NULL;
        cout<<"是否添加"<<T->data<<"右孩子？（Y/N）"<<endl;
        cin>>check;
        if (check=='Y')
            createTree(T->rchild);
        else
            T->rchild=NULL;
    
}

void preorder(Btree T){//先序遍历
    if (T){
        cout<<T->data<<" ";
        preorder(T->lchild);
        preorder(T->rchild);
    }
}

void inorder(Btree T){//中序遍历
    if (T){
        inorder(T->lchild);
        cout<<T->data<<" ";
        inorder(T->rchild);
    }
}

void posorder(Btree T){//后续遍历
    if (T){
        posorder(T->lchild);
        posorder(T->rchild);
        cout<<T->data<<" ";
    }
}

bool Leveltraverse(Btree T){//层次遍历
    Btree p;
    if (!T)
        return false;
    queue<Btree> Q;
    Q.push(T);
    while (!Q.empty()){
        p=Q.front();
        Q.pop();
        cout<<p->data<<" ";
        if (p->lchild)
            Q.push(p->lchild);
        if (p->rchild)
            Q.push(p->rchild);
    }
    return true;
}

Btree pre_mid_createBTree(char *pre,char *mid,int len){//由先序、中序还原建立二叉树
    if (len==0)
        return NULL;
    char ch=pre[0];//先序序列中的第一个节点，作为根
    int index=0;//在中序序列中查找根节点，并用index记录查找长度
    while (mid[index]!=ch) index++;//在中序序列中查找根节点，左边为左子树，右边为右子树
    Btree T=new Bnode;
    T->data=ch;
    T->lchild=pre_mid_createBTree(pre+1,mid,index);//创建左子树
    T->rchild=pre_mid_createBTree(pre+index+1,mid+index+1,len-index-1);//创建右子树
}