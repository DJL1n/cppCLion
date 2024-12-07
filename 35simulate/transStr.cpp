#include <bits/stdc++.h>
using namespace std;

string str1,temp;
int n,m,len;
vector<int> state;
map<char,char> mapChar;

// void trim(string &str){
//     int size=str.size();
//     str=str.substr(1,size-2);
// }

void trans(){
    for (int j=1;j<len+1;j++){
        str1[j]=mapChar[str1[j]];
    }
}

int main(){
    getline(cin,str1);
    len=str1.size()-2;
    // trim(str1);
    
    cin>>n;
    cout<<2;
    while(n){
        getline(cin,temp);
        cout<<n;
        // trim(temp)
        if (temp.size()>3)
            mapChar[temp[1]]=temp[2];
            n--;
            cout<<n;
        
    }
    cin>>m;
    for (int i=0;i<m;i++){
        int a;
        cin>>a;
        state.push_back(a);
    }
    sort(state.begin(),state.end());
    int maxn=state.back();
    int p=0;
    for (int i=1;i<=maxn;i++){
        trans();
        if (state[p]==i){
            p++;
            cout<<str1<<endl;
        }
    }
    
    // cout<<str1<<endl;
    return 0;
}