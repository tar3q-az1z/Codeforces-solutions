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
		lli n, k;
		cin >> n >> k;
		vector<lli> a(n);
		for(auto &i : a) cin >> i;
		for(lli i = 1; i <= k; ++i){
			lli id = i % k;
			for(int j = k + 1; j <= n; ++j){
				if(j % k == id){
					if(a[i - 1] < a[j - 1]){
						swap(a[i - 1], a[j - 1]);
					}
				}
			}
		}
		lli sum = 0;
		for(int i = 0; i < k; ++i) sum += a[i];
		cout << sum << ln;
	}
	return 0;
}