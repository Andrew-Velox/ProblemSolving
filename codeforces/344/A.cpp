#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t;
    cin >> t;

    int ar[t];

    for(int x=0; x<t; x++){
        cin >> ar[x];
    }

    int count = 1;
    for(int x=0; x<t-1; x++){
        if(ar[x]!=ar[x+1]){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}