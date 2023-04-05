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
	
	int n;
	cin >> n;
	if(n == 0){cout << "O-|-OOOO\n"; return 0;}
	while(n){
		int digit = n % 10;
		if(digit < 5){
			if(digit == 0) cout << "O-|-OOOO\n";
			else if(digit == 1) cout << "O-|O-OOO\n";
			else if(digit == 2) cout << "O-|OO-OO\n";
			else if(digit == 3) cout << "O-|OOO-O\n";
			else cout << "O-|OOOO-\n";
		}else{
			if(digit == 5) cout << "-O|-OOOO\n";
			else if(digit == 6) cout << "-O|O-OOO\n";
			else if(digit == 7) cout << "-O|OO-OO\n";
			else if(digit == 8) cout << "-O|OOO-O\n";
			else cout << "-O|OOOO-\n";
		}
		n /= 10;
	}	
	return 0;
}