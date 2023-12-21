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

    int mx=INT_MIN;
    int in=0;
    int sz=s.size();
    bool two_dig=false;
    for(int x=0; x<sz-1; x++){
        int val=(s[x]-'0')+(s[x+1]-'0');


        if(val>9){
            mx=val;
            in=x;
            two_dig=true;
        }
    }

    if(two_dig){

        for(int x=0; x<sz; x++){
            if(x==in){
                cout << mx;
                x++;
                continue;;
            }
            cout << s[x];
        }
        cout << endl;
    }
    else{
        int val=(s[0]-'0')+(s[1]-'0');
        cout << val;
        for(int x=2; x<sz; x++){
            cout << s[x];
        }

        cout << endl;
    }


    // cout << in << endl;
    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}