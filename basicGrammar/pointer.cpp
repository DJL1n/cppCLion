//
// Created by legionb on 24-8-29.
//
#include <iostream>
int main(){
    using namespace std;
    int updates=6;
    int *p_updates;

    p_updates=&updates;
    cout<<updates<<"  "<<*p_updates;
    cout<<endl;
    cout<<p_updates<<"  "<<&updates;
    cout<<endl<<*(p_updates-1);
    return 0;
}