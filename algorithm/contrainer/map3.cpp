#include <bits/stdc++.h>
using namespace std;
int T,m,num;
string name,place;

int main(){
    cin>>T;
    while(T--){
        map<string,map<string ,int>>mp;
        cin>>m;
        for (int i=0;i<m;i++){
            cin>>name>>place>>num;
            mp[place][name]+=num;
        }
        map<string,map<string,int>>::iterator iter1;
        map<string,int>::iterator iter2;
        for (iter1=mp.begin();iter1!=mp.end();iter1++){
            cout<<iter1->first<<endl;
            for (iter2=iter1->second.begin();iter2!=iter1->second.end();iter2++){
                cout<<"   |----"<<iter2->first<<"("<<iter2->second<<")"<<endl;
            }
        }
        if (T) cout<<endl;
    }
    return 0;
}