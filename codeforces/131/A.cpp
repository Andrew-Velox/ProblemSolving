#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

void solve(){
    string s; cin >> s;

    int flag = 0,cnt=0,smcnt=1;

    if(islower(s[0])){
        for(int x=1; x<s.size(); x++){
            if(islower(s[x])){
                smcnt++;
            }
            if(isupper(s[x])){
                cnt++;
            }
        }
        if(cnt==s.size()-1){
            s[0] = toupper(s[0]);
            cout << s[0];
            for(int x=1; x<s.size(); x++){
                s[x]=tolower(s[x]);
                cout << s[x];
            }

            cout << endl;
            return;
        }
        else{
            for(int x=0; x<s.size(); x++){
                cout << s[x];
            }

            cout << endl;
            return;
        }
    }

    // for upper//

    if(isupper(s[0])){
        for(int x=1; x<s.size(); x++){
            if(isupper(s[x])){
                smcnt++;
            }
            if(islower(s[x])){
                cnt++;
            }
        }

        if(smcnt==s.size()){
            for(int x=0; x<s.size(); x++){
                s[x]=tolower(s[x]);
                cout << s[x];
            }

            cout << endl;
            return;
        }
        else{
            for(int x=0; x<s.size(); x++){
                cout << s[x];
            }

            cout << endl;
            return;
        }
    }
    
}

int main(){
    speed();
    ll int t=1;// cin >> t;
    while(t--) solve();
    return 0;
}