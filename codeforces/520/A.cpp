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
    int sz; cin >> sz;
    string s; cin >> s;
    string a = "abcdefghijklmnopqrstuvwxyz";
    for(int x=0; x<sz; x++){
        s[x]=tolower(s[x]);
    }
    sort(s.begin(),s.end());

    int cnt=0,flag=0;

    for(int x=0; x<a.size(); x++){
        for(int y=0; y<sz; y++){
            if(a[x]==s[y]){
                cnt++;
                break;
                if(cnt==26) break;
            }
        }
    }

    cout << (cnt!=26 ? "NO":"YES") << endl; 
    
}

int main(){
    speed();
    ll int t=1;// cin >> t;
    while(t--) solve();
    return 0;
}