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
    if(s.size()<2) cout << 0 << endl;

    else{

        int cnt=1;
        int sum=0;
        for(int x=0; x<s.size(); x++){
            sum+=s[x]-'0';
        }
        s=to_string(sum);

        while(sum>9){
            cnt++;
            sum=0;
            for(int x=0; x<s.size(); x++){
                sum+=s[x]-'0';
            }
            s=to_string(sum);
        }

        cout << cnt << endl;
    }
    
}

int main(){
    speed();
    ll t=1;// cin >> t;
    while(t--) solve();
    return 0;
}