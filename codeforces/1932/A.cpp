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
    ll len;
     cin >> len;
    string s; cin >> s;

    ll cnt=0;

    bool flag=false;
    for(int x=0; x<s.size()-1; x++){

        if(s[x]=='*' && s[x+1]=='*'){
            flag=true;
            break;
        }
        if(s[x]=='@') cnt++;
    }
    if(!flag){
        if(s[s.size()-1]=='@') cnt++; 
    }


    cout << cnt << endl;
    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}