// Author : Mars_Coder
// Date   : 12/8/2022

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

	int n = 0;
	cin >> n;
	int a[n + 1] = {};
	int ai;
	for(int i = 0; i < n; ++i){
		cin >> ai;
		a[ai] = i + 1;
	}
	for(int i = 1; i <= n; ++i) cout << a[i] << ' ';
	cout << endl;
	return 0;
}
