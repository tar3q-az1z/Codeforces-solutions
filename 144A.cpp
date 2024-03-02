// Author : Mars_Coder
// Date   : 13/8/2022

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

	int n;
	cin >> n;
	int maxi, mini, ai;
	int mx = -1, mn = 10000;
	for(int i = 0; i < n; ++i){
		cin >> ai;
		if(ai > mx){
			mx = ai;
			maxi = i;
		}
		if(ai <= mn){
			mn = ai;
			mini = i;
		}
	}	
	if(mini < maxi){
		mini += 1;
		cout << maxi + (n - 1 - mini) << endl;
	}
	else cout << maxi + (n - 1 - mini) << endl;
	return 0;
}
