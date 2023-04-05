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
		if(n % 3 == 0){
			cout << n / 3 << ln;
		}else if(n % 3 == 2){
			cout << (n / 3) + 1 << ln;
		}else{
			if(n == 1){cout << "2\n"; continue;}
			int way1 = (n / 3) - 1;
			cout << way1 + (n - (way1 * 3)) / 2 << ln;
		}
	}
	return 0;
}