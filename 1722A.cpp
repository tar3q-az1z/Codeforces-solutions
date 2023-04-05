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
	
	int t, n;
	cin >> t;
	string base = "Timur";
	sort(base.begin(), base.end());
	while(t--){
		cin >> n;
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		if(s == base) cout << "YES\n";
		else cout << "NO\n";
	}	
	return 0;
}