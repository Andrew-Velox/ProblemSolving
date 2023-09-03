//BISMILLAH//
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    string s;
    cin >> s;

    int len = s.length();
    int r=0;
    for(int x=0; x<len-1; x++){
        int count = 0;
        for(int y=x+1; y<len; y++){
            if(s[x]==s[y]){
                count++;
            }
        }

        if(count>1){
            r++;
        }
        else if(count==1) r++;
        
    }

    int distinct = len-r;
    
    if(distinct%2==0){
        cout << "CHAT WITH HER!" << endl;
    }
    else cout << "IGNORE HIM!" << endl;
    return 0;
}