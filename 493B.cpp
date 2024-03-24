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
	
	lli n, ai;
	cin >> n;
	vector<lli> p1, p2;
	lli sum1 = 0, sum2 = 0;
	bool flag1 = 0, flag2 = 0;
	for(int i = 0; i < n; ++i){
		cin >> ai;
		if(i == n - 1){
			if(ai < 0) flag2 = 1;
			else flag1 = 1;
		}
		if(ai > 0) p1.push_back(ai), sum1 += ai;
		else p2.push_back(-ai), sum2 += (-ai);
	}
	if(sum1 > sum2) cout << "first\n";
	else if(sum1 < sum2) cout << "second\n";
	else{
		if(p1.size() != p2.size()){
			if(p1.size() > p2.size()){
				for(int i = 0; i < p2.size(); ++i){
					if(p1[i] == p2[i]) continue;
					if(p2[i] > p1[i]){ cout << "second\n"; return 0;}
					else {cout << "first\n"; return 0;}
				}
			}else{
				for(int i = 0; i < p1.size(); ++i){
					if(p1[i] == p2[i]) continue;
					if(p1[i] > p2[i]){ cout << "first\n"; return 0;}
					else{ cout << "second\n"; return 0;}
				}				
			}
		}
		for(int i = 0; i < p1.size(); ++i){
			if(p1[i] == p2[i]) continue;
			else if(p1[i] > p2[i]) {cout << "first\n"; return 0;}
			else {cout << "second\n"; return 0;}
		}
		if(flag1) cout << "first\n";
		else cout << "second\n";

	}
	return 0;
}
// 1 3
// 1 2 3 5