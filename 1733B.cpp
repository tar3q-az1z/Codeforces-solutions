// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define sz(x) (x).size()
#define lli long long int
#define FIXED(x) cout << fixed << setprecision(x)

int main(void){
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		int n, x, y;
		cin >> n >> x >> y;
		if(x == 0 && y == 0) cout << "-1\n";
		else if((x != 0) && (y != 0)) cout << "-1\n";
		else{
			int mn = max(x, y);
			if((n - 1) % mn) cout << "-1\n";
			else{
				int now = 1, tr = 0;
				for(int i = 2; i <= n; ++i){
					if(tr < mn){
						cout << now << ' ';
						++tr;
					}else{
						tr = 0;
						now = i;
						--i;
					}
				}
				cout << ln;
			}
		}
	}
	return 0;
}