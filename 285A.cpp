#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int p = n;
    for(int i = 1; i <= k; ++i){
        cout << p << ' ';
        --p;
    }
    for(int i = 1; i <= p; ++i){
        cout << i << ' ';
    }
    return 0;
}