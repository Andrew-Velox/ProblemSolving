#include <bits/stdc++.h>
#define ll long long
using namespace std;

void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

void solve(){
    ll int a,b; cin >> a >> b;
    ll int ar[a];
    ll int cnt=0;
    for(int x=0; x<a; x++){
        cin>>ar[x];
    }
    int val = ar[b-1];
    sort(ar,ar+a);
    for(int x=0; x<a; x++){
        if(ar[x]>=val and ar[x]>0) cnt++;
    }
    cout << cnt << "\n";
    
}

int main(){
    speed();
    ll int t=1;// cin >> t;
    while(t--) solve();
    return 0;
}