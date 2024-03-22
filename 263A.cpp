// Author : Mars_Coder
// Date   : 11/8/2022

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

	int mt[5][5];
	int r, c;
	for(int i = 0; i < 5; ++i){
		for(int j = 0; j < 5; ++j){
			cin >> mt[i][j];
			if(mt[i][j] == 1){r = i + 1; c = j + 1;}
		}
	}
	cout << abs(r - 3) + abs(c - 3) << "\n";
	return 0;
}
