#include <iostream>
int main(){
    using namespace std;
    int x=20;
    {
        int y=100;
        cout<<x<<"1"<<endl;
        cout<<y<<endl;
    }
    cout<<x<<"2"<<endl;
    //cout<<y<<endl;
    return 0;
}