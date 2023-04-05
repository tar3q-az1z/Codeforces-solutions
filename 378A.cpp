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
	
	int a, b;
	cin >> a >> b;
	int fwin = 0, draw = 0, swin = 0;
	for(int i = 1; i <= 6; ++i){
		int d1 = abs(i - a), d2 = abs(i - b);
		if(d1 == d2) ++draw;
		else if(d1 < d2) ++fwin;
		else ++swin;
	}
	cout << fwin << ' ' << draw << ' ' << swin << ln; 
	return 0;
}