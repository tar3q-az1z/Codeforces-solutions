// Author : Mars_Coder
// Date   : //2022

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L

int main(void){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif

	int n, m;
	cin >> n >> m;
	int mn = min(n, m);
	if(mn % 2 == 0) cout << "Malvika\n";
	else cout << "Akshat\n";	
	return 0;
}