#include<bits/stdc++.h>
using namespace std;
#define ln "\n"
int main(void){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		
	#endif

	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 2; i <= n; ++i) cout << i << ' ';
		cout << 1 << ln;
	}
	return 0;
}