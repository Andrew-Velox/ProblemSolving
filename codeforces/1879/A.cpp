#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t;
    cin >> t;

    while(t--){
        ll int size; cin >> size;
        ll int a[size],b[size];
        for(int x=0; x<size; x++) cin >> a[x] >> b[x];

        ll int cnt=0;
        for(int x=1; x<size; x++) if(a[x]>=a[0] && b[x]>=b[0]) cnt++;

        if(cnt>0) cout << -1 << endl;
        else cout << a[0] << endl;
    }
        
    return 0;
}