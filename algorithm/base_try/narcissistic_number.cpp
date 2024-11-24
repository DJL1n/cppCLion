#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,a,b,c;
    cin>>num;
    a=num%10;
    b=(num/10)%10;
    c=num/100;
    if (num==pow(a,3)+pow(b,3)+pow(c,3)){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }
    return 0;
}