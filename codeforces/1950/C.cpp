#include <bits/stdc++.h>
#define ll long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define endl "\n"
using namespace std;

void solve(){
    string s; cin >> s;

    ll hr=s[0]-'0';
    hr*=10;
    ll l=s[1]-'0';
    hr+=l;


    ll mn=s[3]-'0';
    mn*=10;
    ll ls=s[4]-'0';
    mn+=ls;
    
    if(hr<12 && hr>0) cout << s << " AM" << endl;
    else if(hr==0 && mn==0) cout << "12:00 AM" << endl;
    else if(hr==0 && mn!=0) cout << "12:" << s[3] << s[4] << " AM" << endl;
    else{

        hr -= 12;
        if (hr == 0) cout << "12";

        else if(hr<10) cout << "0"<<hr;
        else cout << hr;
        
        cout << ":";
        if (mn < 10) cout << "0";
        cout << mn << " PM" << endl;
    }

    


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    while(t--) solve();
    return 0;
}