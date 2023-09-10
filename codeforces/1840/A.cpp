#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t;
    cin >> t;
    while(t--){
        int len;
        cin >> len;

        string s;
        cin >> s;

        for(int x=1; x<len; x++){
            if(s[0]==s[x]){

                cout << s[0];
                s[0]=s[x+1];
                x++;

            }
        }
        cout << endl;
    }
    
    return 0;
}