// Author : Mars_Coder
// Date   : 14/8/2022

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

	int t;
	cin >> t;
	while(t--){
		int n, k, ai;
		cin >> n >> k;
		int op = 0;
		for(int i = 0; i < n; ++i){
			cin >> ai;
			if(i >= k){
				if(ai <= k) ++op;
			}
		}
		cout << op << endl;
	}
	return 0;
}