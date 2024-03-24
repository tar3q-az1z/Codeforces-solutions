// Author : Mars_Coder
// Date   : 8/11/2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI          3.141592653589793238462643383279502884L

int main(void){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif

	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		if(s.size() > 10) cout << s[0] << s.size() - 2 << s[s.size() - 1] << "\n";
		else cout << s << "\n";
	}
	return 0;
}
