#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t; cin >> t;
    while(t--){
        string in; cin >> in;
        int count = 0;
        char code[11] = "codeforces";

        for(int x=0; x<10; x++){
            if(code[x] != in[x]) count++;
        }

        cout << count << endl;
    }

    return 0;
}