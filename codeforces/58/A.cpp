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
    string s; cin >> s;
    string a = "hello";

    int cnt=0,in=0;

    for(int x=0; x<a.size(); x++){
        for(int y=in; y<s.size(); y++){
            if(a[x]==s[y]){
                cnt++;
                in=y+1;
                y=s.size();
            }
        }
    }

    cout << (cnt==5 ? "YES":"NO") << endl; 
    
}

int main(){
    speed();
    ll int t=1;// cin >> t;
    while(t--) solve();
    return 0;
}