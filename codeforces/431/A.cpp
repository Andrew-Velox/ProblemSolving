#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int array[5];
    for(int x=1; x<5; x++){
        cin >> array[x];
    }

    string s;
    cin >> s;

    ll int res=0;
    for(int x=0; x<s.length(); x++){
        res += array[s[x] - '0']; // '0' used for convert string to digit  //
    }
    cout << res << endl;
    return 0;
}