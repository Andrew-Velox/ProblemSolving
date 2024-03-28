#include <bits/stdc++.h>
#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define endl "\n"
using namespace std;

// A stair satisfies the condition a<b<c
// .
// A peak satisfies the condition a<b>c
// .

void solve(){
    ll a, b, c;
    cin >> a >> b >>c;

    if(a<b && b<c) cout << "STAIR" << endl;
    else if(a<b && b>c) cout << "PEAK" << endl;
    else cout << "NONE" << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    while(t--) solve();
    return 0;
}