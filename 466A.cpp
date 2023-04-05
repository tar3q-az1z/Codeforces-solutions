// Author : Mars_Coder
// Date   : 23/8/2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define FOR(a, b, c) for(auto i = a; i < b; i += c)
#define MAX INT_MAX
#define print(x) cerr << #x << " : " << x << ln

int dp[1010] = {};
int makeMin(int n, int m, int a, int b){
	if(n <= 0) return 0;
	if(dp[n]) return dp[n]; 
	return dp[n] = min(makeMin(n - m, m, a, b) + b, makeMin(n - 1, m, a, b) + a);
}

int main(void){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif

	int n, m, a, b;
	cin >> n >> m >> a >> b;
	cout << makeMin(n, m, a, b);
	return 0;
}