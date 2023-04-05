// Author : Mars_Coder
// Date   : 18/8/2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define print(x) cerr << #x << " : " << x << ln
int main(void){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif

	int t;
	cin >> t;
	while(t--){
		long long int a, b, c, d;
		cin >> a >> b >> c >> d;
		if((a * d) == (b * c)) cout << "0\n";
		else if(a == 0 || c == 0) cout << 1 << ln;
		else{
			long long int num1 = b * c, num2 = a * d;
			long long int den1 = a * d, den2 = b * c;
			if((num1 % den1 == 0) || (num2 % den2) == 0) cout << 1 << ln;
			else cout << 2 << ln;
		}
	}
	return 0;
}