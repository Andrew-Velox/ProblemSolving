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
    vector<string> s;

    for(int x=0; x<len; x++){
        string a; cin >> a;
        s.push_back(a);
    }

    sort(s.begin(),s.end());
    string fast=s[0],second;

    int a=0,b=0;
    for(int x=0; x<len; x++){
        
        if(s[x]!=fast){
            second=s[x];
            b++;
        }
        else a++;
    }

    cout << (a>b ? fast:second) << endl;
    
}

int main(){
    speed();
    ll int t=1;// cin >> t;
    while(t--) solve();
    return 0;
}