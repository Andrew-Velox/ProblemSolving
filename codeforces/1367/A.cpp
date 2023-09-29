#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t; cin >> t;
    
    while(t--){
        string s; cin >> s;
        cout << s[0] << s[1];
        int lm=0;
        for(int x=2; x<s.size(); x++){
            if(s[x-1]!=s[x] || lm==1){
                cout << s[x];
                lm=0;
            }
            else if(s[x-1]==s[x]){
                lm=1;
            }

        }
        cout << endl;
    }
    return 0;
}