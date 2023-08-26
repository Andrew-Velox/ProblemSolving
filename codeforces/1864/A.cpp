#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
        int x,y,n;
        cin >> x >> y >> n;

        vector<int> array(n);
        array[n-1] = y;
        int gap = 1;

        for(int i=n-2; i>=0; i--){
            array[i] = array[i+1]-gap;
            gap++;
        }

        if(array[0]<x) cout << -1 << endl;
        
        else{
            cout << x << " ";
            for(int i=1; i<n; i++) cout << array[i] << " ";
            cout << endl;
        }
    }
    return 0;
}