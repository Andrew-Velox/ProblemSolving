#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t; cin >> t;

    while(t--){
        ll int len;cin >> len;
        string s; cin >> s;

        char last = s[0];
        for(int x=0; x<len; x++){
            if(s[x]>last){
                last = s[x];
            }
        }

        cout << (last-'0') - 48 << endl;
    }
    return 0;
}