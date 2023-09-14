#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int ar[4];
    for(int x=0; x<4; x++){
        cin >> ar[x];
    }

    int count = 0;
    sort(ar, ar+4);
    for(int x=0; x<4-1; x++){
        if(ar[x]==ar[x+1]) count++;
    }

    cout << count << endl;
    return 0;
}