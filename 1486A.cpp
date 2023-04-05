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
	lli ai, n;
	cin >> t;
	while(t--){
		cin >> n;
		lli sum = 0, now = 0;
		bool flag = 1;
		for(int i = 0; i < n; ++i){
			cin >> ai;
			sum += ai;
			now += i;
			if(sum < now){
				flag = 0;
				//break;
			}
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}