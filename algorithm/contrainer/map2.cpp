#include <bits/stdc++.h>
using namespace std;
map<int,int>mp;
map<int,int>::iterator it;
int main(){
    int n,k,p;
    while(scanf("%d%d",&k,&p)){
        switch(n){
            case 1:
                scanf("%d%d",&k,&p);
                mp[p]=k;
                break;
            case 2:
                if (mp.empty()){
                    printf("0\n");
                    break;
                }
                it=--mp.end();
                printf("%d\n",it->second);
                mp.erase(it);
                break;
            case 3:
                if (mp.empty()){
                    printf("0\n");
                    break;
                }
                it=mp.begin();
                printf("%d\n",it->second);
                mp.erase(it);
                break;
        }
    }
    return 0;
}