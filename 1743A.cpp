// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI          3.141592653589793238462643383279502884L
#define ln          "\n" // no flush, oppos of endl
#define _flush      endl
#define stop_sync   ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios   cin.tie(nullptr) // no flush
#define vi          vector<int>
#define vii         vector<lli>
#define vss         vector<string>
#define sz(x)       ((x).size())
#define pb          push_back
#define ppb 	    pop_back
#define lli         long long int
#define FIXED(x)    cout << fixed << setprecision(x)

int fn(int x, int y){
	if(x < y) swap(x, y);
	int ans = 1;
	//cout << x << ' ' << y << ln;
 	for(int i = x; i > (x - y); --i) ans *= i;
	for(int i = 1; i <= y; ++i) ans /= i;
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
	
	int t;
	cin >> t; 
	while(t--){
		int n;
		cin >> n;
		vi a(n);
		for(auto &i: a) cin >> i;
		cout << fn(10 - n, 2) * 6 << ln;
	}	
	return 0;
}


/*
some familiar issues:
----> [look at global variables and their values]

*/