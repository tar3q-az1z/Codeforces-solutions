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

vector<int> a, b;
int checker(int x){
	int l = 0, h = sz(a) - 1, mid;
	int ans = 0;
	while(l <= h){
		mid = h - (h - l) / 2;
		//cout << "mid: " << mid << ln;
		if(a[mid] <= x){
			ans += (mid - ans) + 1;
			l = mid + 1;
		}
		else h = mid - 1;
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
	
	int n, m;
	cin >> n >> m;
	a.resize(n); b.resize(m);

	for(auto &i: a) cin >> i;
	for(auto &i: b) cin >> i;
	sort(a.begin(), a.end());
	for(int i: b){
		cout << checker(i) << ' ';
	}
	cout << ln;
	return 0;
}