// Author : Mars_Coder
// Date   : 19/8/2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush

int main(void){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif

	int n, xi, yi, zi, xSum = 0, ySum = 0, zSum = 0;
	cin >> n;
	while(n--){
		cin >> xi >> yi >> zi;
		xSum += xi;
		ySum += yi;
		zSum += zi;
	}
	if(xSum == 0 && ySum == 0 && zSum == 0) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
