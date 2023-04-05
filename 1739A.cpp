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
		int n, m;
		cin >> n >> m;
		int flag = 1;
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= m; ++j){
				flag = 0;
				if((j - 2 > 0) && (i - 1 > 0 || i + 1 <= n)) flag = 1;
				if((j + 2 <= m) && (i - 1 > 0 || i + 1 <= n)) flag = 1;
				if((i - 2 > 0) && (j - 1 > 0 || j + 1 <= m)) flag = 1;
				if((i + 2 <= n) && (j - 1 > 0 || j + 1 <= m)) flag = 1;
				if(flag == 0){
					cout << i << ' ' << j << ln;
					flag = -1;
					break;
				}
			}
			if(flag == -1) break;
		}
		if(flag != -1) cout << "1 1" << ln;
	}
	return 0;
}