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
    int n; cin >> n;
    string s;
    cin >> s;

    int cnt[27]={0};
    for(int x=0; x<s.size(); x++){
        cnt[(s[x]-'0')-16]++;
    }

    int ans=0;
    for(int x=1; x<=26; x++){
        if(cnt[x]>=x) ans++;
    }

    cout << ans << endl;
    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}