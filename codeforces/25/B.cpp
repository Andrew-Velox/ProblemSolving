#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int len;
    cin >> len;
    string n;
    cin >> n;

    int ck = len%2;
    if(len<=3){
        cout << n << endl;
    }
    else if(ck==0){
        for(int x=0; x<len-1; x++){
            cout << n[x] << n[x+1];
            if(x!=len-2){
                cout << "-";
            }
            x++;
        }
    }
    else{
        cout << n[0] << n[1] << n[2] << "-";
        for(int x=3; x<=len-2; x++){
            cout << n[x] << n[x+1];
            if(x!=len-2){
                cout << "-";
            }
            x++;
        }
    }
    return 0;
}