#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
#define ll long long
using namespace std;

int main(){
    string s,temp,t;
    cin >> s;
    ll int len = s.length();

    for(int x=0; x<len; x++){
        if(islower(s[0])){
            s[0] = toupper(s[0]);
            cout << s[x];
        }
        else{
            cout << s[x];
        }
    } 
    return 0;
}

