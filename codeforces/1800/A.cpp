#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll int t; cin >> t;
    
    while(t--){

        ll int len; cin >> len;
        string nm; cin >> nm; 
        int cnt = 0;
        for(int x=0; x<len; x++){
            nm[x]=tolower(nm[x]);
            if(nm[x]!='m' && nm[x]!='e' && nm[x]!='o' && nm[x]!='w'){
                cnt++;
            }
        }

        if(cnt){
            cout << "NO" << endl;
        }

        else{
            nm.erase(unique(nm.begin(), nm.end()), nm.end());
            cout << (nm=="meow" ? "YES":"NO") << endl;
        }
    }

    return 0;
}