#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;

    string fast_word = "I hate ";
    string sec_word = "I love ";
    string third_word = "that ";
    string last_word = "it";

    if(n==1){
        cout << fast_word+last_word << endl;
    }
    else if(n==2){
        cout << fast_word+third_word+sec_word+last_word << endl;
    }
    else if(n>2){
        for(int x=1; x<=n; x++){
            if(x%2==1){
                cout << fast_word;
            }
            else{
                cout << sec_word;
            }
            if(x!=n){
                cout << third_word;
            }
        }
        cout << last_word << endl;
    }
    
    
    return 0;
}

