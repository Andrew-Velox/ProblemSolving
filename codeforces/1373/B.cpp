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

    int f=0,x=0,cnt=0;
    while(f!=1){
        // cout << x<< endl;
        if(x!=s.size()-1){
            if(s[x]!=s[x+1]){
                // cout << s[x] << "_" << s[x+1] << endl;
                s.erase(s.begin()+x,s.begin()+(x+2));
                cnt++;
                x=0;
            }
            else x++;
        }
        else f=1;
        if(s.size()==0) f=1;
        
    }
    
    if(cnt%2==1) cout << "DA" << endl;
    else cout << "NET" << endl;


    
}

int main(){
    speed();
    ll int t; cin >> t;
    while(t--) solve();
    return 0;
}