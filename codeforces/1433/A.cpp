#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        string n;
        cin >> n;

        int len = n.size();
        int num=(n[0]-'0');
        int bf=(num*10)-10;
        int af=0;
        for(int x=1; x<=len; x++){
            af+=x;
        }

        cout << bf+af << endl;
    }
    return 0;
}