//
// Created by legionb on 2024/7/17.
//
#include<iostream>
#include<climits>
int main() {
    using namespace std;
    int n_int=INT_MAX;
    short n_short=SHRT_MAX;
    long n_long=LONG_MAX;
    long long n_llong=LLONG_MAX;

    cout<<"int is"<<sizeof(n_int)<<" bytes."<<endl;
    cout<<"short is"<<sizeof(n_short)<<" bytes."<<endl;
    cout<<"long is"<<sizeof(n_long)<<" bytes."<<endl;
    cout<<"long long is"<<sizeof(n_llong)<<" bytes."<<endl;

    cout<<"Max"<<endl;
    cout<<n_int<<endl
    <<n_short<<endl
    <<n_long<<endl
    <<n_llong<<endl;
}