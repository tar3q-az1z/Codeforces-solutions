// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884
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
	
	int n;
	cin >> n;
	vector<int> r(n);
	for(auto& i: r) cin >> i;
	sort(r.begin(), r.end());
	double red_portion = 0.00;
	if(n % 2){
		red_portion += r[0] * r[0] * 1.0000;
		for(int i = 2; i < n; i += 2){
			red_portion += (r[i] * r[i] - r[i - 1] * r[i - 1]) * 1.00000;
		}
	}else{
		for(int i = 1; i < n; i += 2){
			red_portion += (r[i] * r[i] - r[i - 1] * r[i - 1]) * 1.0000;
		}
	}
	red_portion *= PI;
	FIXED(10);
	cout << red_portion << ln;
	return 0;
}
