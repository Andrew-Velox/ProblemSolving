#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n; cin >> n;
    string ss;
    cin >> ss;

    int a = 0;
    int d = 0;
    for(int x=0; x<n; x++){
        if(ss[x]=='A'){
            a++;
        }
        else{
            d++;
        }
        //cout << ss[x] << " ";
    }

    if(a>d) cout << "Anton" << endl;
    else if(a<d) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}