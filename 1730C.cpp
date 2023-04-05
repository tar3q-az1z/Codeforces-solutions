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
	
	stop_sync;
	untie_ios;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int last = 0;
		for(int i = 1; i < sz(s); ++i){
			if(s[i] < s[i - 1]) last = i;
		}
		for(int i = last - 1; i >= 0; --i){
			if(s[i] > s[last]) s[i] = min(s[i] + 1, 57);
			else last = i;
		}
		sort(s.begin(), s.end());
		cout << s << ln;
	}	
	return 0;
}

/*
324752277691991
42475.....


*/