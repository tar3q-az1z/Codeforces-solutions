#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a;
    cin >> t;
    while(t--){
        cin >> a;
        int n = (180 - a);
        if((360 % n)) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}