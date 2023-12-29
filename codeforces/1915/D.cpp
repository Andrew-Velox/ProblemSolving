#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fx(x) fixed<<setprecision(x)
using namespace std;

void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

void solve(){
    int len; cin >> len;
    string s; cin >> s;

    int val=0;
    for(int x=0; x<len-1; x++){
        if((s[x] !='a' || s[x]!='e') && (s[x+1]!='a' || s[x+1]!='e') && val==2){
            cout << s[x] << ".";
            val=0;
            continue;
        }
        else if((s[x]=='a' || s[x]=='e') && (s[x+2]=='a' || s[x+2]=='e') && x!=len-2){
            cout << s[x] << ".";
            val=0;
            continue;
        }
        else cout << s[x];
        val++;
    }
    cout << s[len-1];

    cout << endl;
    //be ba ce dac 
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}