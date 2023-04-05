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
#define pb 		    push_back
#define ppb 	    pop_back
#define lli         long long int
#define FIXED(x)    cout << fixed << setprecision(x)

int main(void){
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int t (0);
	cin >> t; 
	while(t--){
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int each = n / k;
		int ch[26] = {};
		for(int i = 0; i < n; ++i){
			++ch[s[i] - 97];
		}
		vector<char> ans;
		for(int i = 0; i < k; ++i){
			int cnt = 0, j;
			bool found = 0;
			for(j = 0; j < 26 && cnt < each;){
				if(ch[j] != 0){
					--ch[j];
					++j;
				}else{
					ans.pb(j + 97);
					found = 1;
					++j;
					break;
				}
				++cnt;
			}
			if(!found) ans.pb(j + 97);
		}
		sort(ans.begin(), ans.end());
		reverse(ans.begin(), ans.end());
		for(auto i: ans) cout << i;
		cout << ln;
	}	
	return 0;
}