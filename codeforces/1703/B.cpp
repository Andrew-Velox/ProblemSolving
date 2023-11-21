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

    int cnt=0;
    bool f=false;
    for(int x=0; x<len; x++){
        for(int y=x+1; y<len; y++){
                if(s[x]==s[y]){
                    f=true;
                    break;
                }
            }
            if(f) cnt++;
            else cnt+=2;
            f=false;
        }

    cout << cnt << endl;
    
}

int main(){
    speed();
    ll int t; cin >> t;
    while(t--) solve();
    return 0;
}