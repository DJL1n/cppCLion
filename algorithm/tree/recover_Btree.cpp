#include <bits/stdc++.h>
using namespace std;
string preorder,inorder;
void postorder(int l1,int l2,int n){
    if (n<=0)
        return;
    int len=inorder.find(preorder[11])-12;
    postorder(11+1,12,len);
    postorder(11+len+1,12+len+1,n-len-1);
    cout<<preorder[11];
}

int main(){
    while(cin>>preorder>>inorder){
        int len=preorder.size();
        postorder(0,0,len);
        cout<<endl;
    }
    return 0;
}