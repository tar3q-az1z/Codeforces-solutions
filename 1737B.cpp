// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI          3.141592653589793238462643383279502884L
#define ln          "\n" // no flush, oppos of endl
#define _flush      endl
#define stop_sync   ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios   cin.tie(nullptr) // no flush
#define sz(x)       ((x).size())
#define pb          push_back
#define ppb 	    pop_back
#define lli         long long int
#define FIXED(x)    cout << fixed << setprecision(x)

double real_sqrt(long long int value, int prec = 0){
	long long int l = 0, r = sqrtl(value) + 100, mid, sq;
	double ans = 0.0;
	while(l <= r){
		mid = r - (r - l) / 2;
		sq = mid * mid;
		if(sq == value){
			ans = mid;
			break;
		}
		if(sq < value){
			ans = mid;
			l = mid + 1;
		}else r = mid - 1;
	}
	double up = 0.1;
	for(int i = 0; i < prec; ++i){
		while(ans * ans <= value){
			ans += up;
		}
		ans -= up;
		up = up / 10;
	}
	return ans;
}

int main(void){
	
	stop_sync;
	untie_ios;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int t(0);
	cin >> t;
	while(t--){
		lli l, r; 
		cin >> l >> r; 
		lli fs1 = real_sqrt(l);
		lli fs2 = real_sqrt(r);
		lli ans (0);
		ans += (fs2 - (fs1 + 1)) * 3;
		for(int i = 0; i < 3; ++i){
			if(fs1 * (fs1 + i) >= l) ++ans;
			if(fs2 * (fs2 + i) <= r) ++ans;
		}
		cout << ans << ln;
	}
	return 0;
}