#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll int ar[4];
    for(int x=0; x<4; x++) cin >> ar[x];

    sort(ar,ar+4);
    int cnt = 0;
    if(ar[3]==ar[0]+ar[1]+ar[2]) cnt=1;
    else if(ar[3]+ar[0]==ar[1]+ar[2]) cnt=1;

    cout << (cnt ? "YES" : "NO") << endl;

}

int main(){
    ll int t=1;// cin >> t;
    while(t--) solve();
    return 0;
}