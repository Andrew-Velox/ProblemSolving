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
    string st;

    int a=0, b=0, c=0;
    for(int x=0; x<3; x++){
        cin >> st;
        for(int y=0; y<3; y++){
            if(st[y]=='A') a++;
            else if(st[y]=='B') b++;
            else if(st[y]=='C') c++;
        }

    }

    if(a <= b && a <= c) cout << "A" << endl;
    else if(b <= a && b <= c) cout << "B" << endl;
    else cout << "C" << endl;

}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}