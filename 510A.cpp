// Author : Mars_Coder
// Date   : 28/8/2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define FOR(a, b, c) for(auto i = a; i < b; i += c)
#define lli long long int

int main(void){
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int n, m;
	cin >> n >> m;
	bool flag = 1;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			if(i % 2 == 0){
				if(flag) cout << ".#"[j == m];
				else cout << ".#"[j == 1];
			}
			else cout << "#";
		}
		if(i % 2 == 0) flag = 1 - flag;
		cout << ln;
	}
	return 0;
}
