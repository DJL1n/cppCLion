//
// Created by legionb on 24-8-21.
//
#include<iostream>
int main(){
    using namespace std;
    cout<<"What year was your house built?\n";
    int year;
    (cin>>year).get();
    cout<<"What is its street address?\n";
    char address[80];
    cin.getline(address,80);
    cout<<"Year built: "<<year<<endl;
    cout<<"Adress: "<<address<<endl;
    cout<<"Done!\n";
    return 0;
}