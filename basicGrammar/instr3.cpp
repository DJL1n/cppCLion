//
// Created by legionb on 24-8-21.
//
#include<iostream>
int main(){
    using namespace std;
    const int ArSize=20;
    char name[ArSize];
    char dessert[ArSize];

    cout<<"Enter your name:\n";
    cin.get(name,ArSize).get();
    cout<<"Enter your favorite dessert: \n";
    cin.get(dessert,ArSize).get();
    cout<<"I have some delicious "<<dessert;
    cout<<"s for you, "<<name<<".\n";
}