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
		string a, b; 
		cin >> a >> b;
		if(a == b) cout << "=\n";
		else{
			int ans1 (0), ans2 (0);
			for(int i = 0; i < sz(a); ++i){
				if(a[i] == 'X') ans1 += 4;
				else if(a[i] == 'L') ans1 += 3; 
				else if(a[i] == 'M') ans1 += 2;
				else if(a[i] == 'S') ans1 += 1, ans1 *= -1;
			}
			for(int i = 0; i < sz(b); ++i){
				if(b[i] == 'X') ans2 += 4;
				else if(b[i] == 'L') ans2 += 3; 
				else if(b[i] == 'M') ans2 += 2;
				else if(b[i] == 'S') ans2 += 1, ans2 *= -1;	
			}
			if(ans1 > ans2) cout << ">\n";
			else cout << "<\n";
		}
	}	
	return 0;
}


/*
some familiar issues:
----> [look at global variables and their values]

*/