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
    ll n;
    cin >> n;
    char ar[n+1][n+1];


    vector<int> r_cnt;
    ll cnt=0;
    for(int x=0; x<n; x++){
        cnt=0;
        for(int y=0; y<n; y++){
            cin >> ar[x][y];
            if(ar[x][y]=='1')cnt++;
        }
        if(cnt!=0) r_cnt.push_back(cnt);
    }

    bool sq=true;
    
    for(int x=0; x<r_cnt.size()-1; x++){
        if(r_cnt[x]!=r_cnt[x+1]){
            sq=false;
            break;
        }
    }

    cout << (sq ? "SQUARE":"TRIANGLE") << endl;

    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}