#include<bits/stdc++.h>
using namespace std;
bool s[100005];

int main(){
    int n, a;
    cin >> n;
    int mx = 0;
    int ans = -1;
    for(int i = 0; i < 2 * n; ++i){
        cin >> a;
        if(s[a]){
            s[a] = 0;
            mx -= 1;
        }
        else{
            s[a] = 1;
            mx += 1;
        }
        ans = max(ans, mx);
    }
    cout << ans << endl;
    return 0;
}