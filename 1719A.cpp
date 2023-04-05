// Author : Mars_Coder
// Date   : 17/8/2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush

int main(void){
    stop_sync;
    untie_ios;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif

	int t, n, m;
	cin >> t;
	while(t--){
		cin >> n >> m;
		if((n + m - 2) % 2) cout << "Burenka\n";
		else cout << "Tonya\n";
	}	
	return 0;
}