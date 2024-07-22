//
// Created by legionb on 2024/7/22.
//
#include <iostream>
int main() {
    using namespace std;
    int auks,bats,coots;

    auks=19.99+11.99;
    bats=(int)19.99+(int)11.99;
    coots=int(19.99)+int(11.99);
    cout<<auks<<endl<<bats<<endl<<coots<<endl;

    char ch='Z';
    cout<<ch<<"  "<<int(ch)<<endl;
    cout<<static_cast<int>(ch)<<endl;
}