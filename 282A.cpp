#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        string s;
        cin >> s;
        if(s[0] != 'X'){
            if(s[0] == '+') ans += 1;
            else ans -= 1;
        }else{
            if(s[1] == '+') ans += 1;
            else ans -= 1;
        }
    }
    cout << ans << "\n";
    return 0;
}