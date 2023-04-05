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

int main(void){
	
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
		if(n == 1 || n == 3) cout << "-1\n";
		else{
			if(n % 2 == 0){
				for(int i = n; i >= 1; --i) cout << i << ' ';
				cout << ln;
			}else{
				cout << n-- << ' ' << n -- << ' ';
				for(int i = 1; i <= n; ++i) cout << i << ' ';
				cout << ln;
			}
		}
		
	}	
	return 0;
}


/*
some familiar issues:
----> [look at global variables and their values]

*/