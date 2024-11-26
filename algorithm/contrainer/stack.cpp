#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<string>backforward;//后向栈
    stack<string>forward;//前向栈
    string c;
    string cur="http://www.acm.org/";
    while (cin>>c&&c!="QUIT"){
        if (c=="VISIT"){
            backforward.push(cur);
            cin>>cur;
            cout<<cur<<endl;
            while (!forward.empty()){
                forward.pop();
            }
        }else if (c=="BACK"){
            if (backforward.empty()){
                cout<<"Ignored"<<endl;
            }else{
                forward.push(cur);
                cur=backforward.top();
                backforward.pop();
                cout<<cur<<endl;
            }
        }else{
            if (forward.empty())
                cout<<"Ignored"<<endl;
            else{
                backforward.push(cur);
                cur=forward.top();
                forward.pop();
                cout<<cur<<endl;
            }
        }   
    }
    return 0;
}