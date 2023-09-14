#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n1,n2,k1,k2;
    cin >> n1 >> n2 >> k1 >> k2;

    int fast=0;
    int last=0;

    while(n1>0){
        n1--;
        fast++;
    }
    while(n2>0){
        n2--;
        last++;
    }

    //cout << fast << last << endl;
    if(fast>last) cout << "First" << endl;
    else cout << "Second" << endl;

    //cout << fast << " " << last << endl;
    return 0;
}