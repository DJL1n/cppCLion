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

