#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<endl;
    cout<<"交换前"<<a<<"\t"<<b<<endl;
    swap(a,b);
    cout<<"交换后"<<a<<"\t"<<b<<endl;
    return 0;
}