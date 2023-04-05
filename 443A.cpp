// Author : Mars_Coder
// Date   : 19/8/2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush

int main(void){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif

	string s;
	getline(cin, s);
	set<char> lt;
	for(int i = 0; i < s.size(); ++i){
		if(s[i] >= 97 && s[i] <= 122){
			lt.insert(s[i]);
		}
	}
	cout << lt.size() << ln;
	return 0;
}