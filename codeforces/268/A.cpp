#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int m;
    cin >> m;
    int a[m],b[m];

    int count = 0;
    for(int x=0; x<m; x++){
        cin >> a[x] >> b[x];
    }

    for(int x=0; x<m; x++){
        for(int y=0; y<m; y++){
            if(a[x]==b[y]){
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}