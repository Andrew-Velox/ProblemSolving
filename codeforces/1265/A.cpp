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
    string val = "abc";

    int con=0;
    for(int x=0;x<s.size()-1; x++){
        if(s[x]==s[x+1] && s[x]!='?' && s[x+1]!='?'){
            con=1;
        }
    }

    if(con==1) cout << "-1" << endl;
    else{
        int i=0;
        int cnt=0;
        int ll len=s.size();
        for(int x=0; x<len; x++){
            i=0;
            if(s[x]=='?'){
                for(int y=0; y<3;y++){
                    s[x]=val[y];
                    if(s[x]!=s[x-1]){
                        if(x<len-1){
                            if(s[x]!=s[x+1]){
                                cout << s[x];
                                break;
                            }
                        }
                        else if(x==len-1){
                            cout << s[x];
                            break;
                        }
                    }
                }
            }
            else cout << s[x];
        }

        cout << endl;
    }
}

int main(){
    speed();
    ll int t; cin >> t;
    while(t--) solve();
    return 0;
}