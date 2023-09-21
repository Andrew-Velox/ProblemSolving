#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t;
    cin >> t;

    while(t--){
        string a;
        cin >> a;

        if(a[0]=='a' || a[1]=='b' || a[2]=='c') cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}