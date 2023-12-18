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

    if(s.size()==2){
        if(s[0]-'0' < s[1]-'0') cout << s[0] << " " << s[1] << endl;
        else cout << -1 << endl;
    }
    else if(s[1]!='0'){
        cout << s[0] << " ";
        for(int x=1; x<s.size(); x++){
            cout << s[x];
        }
        cout << endl;
    }

    else{
        string a="";
        a+=s[0];
        string b="";
        int f=1;
        int i=1;
        while(s[i]=='0' && i<s.size()){
            a+=s[i];
            f++;
            i++;
        }
        for(int x=f; x<s.size(); x++){
            b+=s[x];
        }

        int A;
        stringstream ss(a);
        ss >> A;
        int B;
        stringstream sss(b);
        sss >> B;
        // cout << a << "dfgg" << b << endl;
        if(A < B ) cout << A << " " << B << endl;
        else cout << -1 << endl;
    }
    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}