// Author : Mars_Coder
// Date   : 20/8/2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define FOR(a, b, c) for(auto i = a; i < b; i += c)

int main(void){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif

	int n;
	cin >> n;
	int p, q, ai;
	cin >> p;
	set<int> lev;
	FOR(0, p, 1){
		cin >> ai;
		lev.insert(ai);
	}
	cin >> q;
	FOR(0, q, 1){
		cin >> ai;
		lev.insert(ai);
	}
	if(lev.size() == n) cout << "I become the guy." << ln;
	else cout << "Oh, my keyboard!" << ln;
	return 0;
}
