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
	
	string s;
	cin >> s;
	int cnt = 0;
	for(int i = 0; i < sz(s); ++i){
		if(s[i] == '4' || s[i] == '7') ++cnt;
	}
	if(cnt == 0) cout << "-1\n";
	else{
		int d4 = 0, d7 = 0;
		for(int i = 0; i < sz(s); ++i){
			if(s[i] == '4') ++d4;
			else if(s[i] == '7') ++d7;
		}
		if(d4 >= d7) cout << "4\n";
		else if(d4 < d7) cout << "7\n";
	}
	return 0;
}
