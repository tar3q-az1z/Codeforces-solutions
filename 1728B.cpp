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
		if(n % 2 == 0){
			for(int i = 1; i <= n - 2; ++i){
				cout << i + 1 << ' ' << i << ' ';
				++i;
			}
			cout << n - 1 << ' ' << n << ln;
	 	}else{
	 		if(n == 5) cout << "1 2 3 4 5" << ln;
	 		else{
	 			cout << "1 2 3 ";
	 			for(int i = 4; i <= n - 2; ++i){
	 				cout << i + 1 << ' ' << i << ' ';
	 				++i;
	 			}
	 			cout << n - 1 << ' ' << n << ln;
	 		}
	 	}
	}
	return 0;
}