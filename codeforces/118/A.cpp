#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s; cin >> s;
    for(int x=0; x<s.size(); x++){
        char low = tolower(s[x]);
        if(low !='a' && low !='e' && low !='i' && low !='o' && low !='u' && low !='y'){
            cout << "." << low;
        }
    }
    cout << endl;
    return 0;
}
