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
    int n,k; cin >> n >> k;

    if(k==0){
        for(int x=n; x>=1; x--){
            cout << x;
            if(x!=1) cout << " ";
        }
        cout << endl;
    }
    else{
        cout << 1 << " ";
        int val=n-k;
        int t=k;
        val++;
        while(t--){
            cout << val;
            if(t>0) cout << " ";
            val++;
        }

        for(int x=n-k; x>1; x--){
            if(x==n-k) cout << " ";
            cout << x;
            if(x!=2) cout << " ";
        }
        cout << endl;
    }
    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}