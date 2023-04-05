// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
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
		int n;
		cin >> n;
		int total = n + (2 * (n / 2)) + (2 * (n / 3));
		cout << total << ln;
	}
	return 0;
}

/*
logic:

(x, x)   ->   x/x = 1 -> n 
(x, 2*x) -> 2*x/x = 2 ->  x*2 <= n -> x = n / 2
(x, 3*x) -> 3*x/x = 3 ->  x*3 <= n -> x = n / 3

*/