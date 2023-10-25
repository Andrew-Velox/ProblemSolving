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
    ll int len; cin >> len;
    string s; cin >> s;
    if(len==2 || len==1) cout << s << endl;
    else if(len%2==0){
        int i=len-2,j=1;
        for(int x=0; x<len; x++){
            if(i>=0){
                cout << s[i];
                i-=2;
            }    
            else if(i<0){
                cout << s[j];
                j+=2;
            }
        }
        cout << endl;
    }
    else if(len%2==1){
        int i=len-2,j=2,flag=0;
        
        for(int x=0; x<len; x++){
            if(i>=0){
                cout << s[i];
                i-=2;
                if(i==-1){
                    i++;
                    cout << s[i];
                    i-=2;
                    x++;
                }
            }    
            else if(i<0){
                cout << s[j];
                j+=2;
            }
        }
        cout << endl;
    }
}

int main(){
    speed();
    ll int t=1;// cin >> t;
    while(t--) solve();
    return 0;
}