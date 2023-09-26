#include <bits/stdc++.h>
#define ll long long
using namespace std;

int bS(int array[], int size, int searchNumber){
    int low=0;
    int high=size-1;
    
    while(low<=high){
        int mid = (low+high)/2;
        if(searchNumber ==  array[mid]){
            return mid;
        }
        else if(searchNumber > array[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    ll int t; cin >> t;
    while(t--){
        ll int size,n; cin >> size >> n;
        int a[size];
        for(int x=0; x<size; x++) cin >> a[x];

        sort(a, a+size);
        int result = bS(a, size, n);

        if (result >=0) {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
  return 0;
}