#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    cin >> s;
    ll int len = s.length();
    
    ll int not_a = 0;
    ll int its_a = 0;
    for(int x=0; x<len; x++){
        if(s[x] != 'a'){
            not_a++;
        }
        else{
            its_a++;
        }
    }
    if(not_a<its_a){
        cout << len << endl;
    }
    else{
        while(not_a>=its_a){
            not_a--;
        }

        cout << its_a+not_a << endl;
    }
    return 0;
}