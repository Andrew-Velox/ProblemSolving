#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    char s[8][8];
    string ss = "";

    for(int x=0; x<8; x++){
        for(int y=0; y<8; y++){
            cin >> s[x][y];
        }
    }

    for(int x=0; x<8; x++){
        for(int y=0; y<8; y++){
            char c = s[x][y];
            if((c>='a' && c<='z') || (c>='A' && c<='Z')){
                ss += c;
            }
        }
    }

    cout << ss << endl;

}

int main(){
    ll int t; cin >> t;
    while(t--) solve();
    return 0;
}