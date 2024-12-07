#include <bits/stdc++.h>
using namespace std;
int n;
string str1;


int solve(){
    cin>>str1;
    int len=str1.size();
    int type=1,flag=0;
    bool hasDigit=false,hasLetter=false,hasPunct=false;
    // set<char> is,ts,cs;
    map<char,int> freq;
    for (char c:str1){
        if (isupper(c)||islower(c)){
            // cs.insert(c);
            hasLetter=true;
            freq[c]++;
        }else if (isdigit(c)){
            // is.insert(c);
            hasDigit=true;
            freq[c]++;
        }else if (ispunct(c)){
            // ts.insert(c);
            hasPunct=true;
            freq[c]++;
        }
        if (freq[c]>2) flag=1;
    }
    if (hasLetter+hasDigit+hasPunct<3) return 0;
    else{
        if (flag==0) return 2;
        else return 1;
    }
        

    
}

int main(){
    scanf("%d",&n);
    for (int i=0;i<n;++i){
        printf("%d\n",solve());
    }
}