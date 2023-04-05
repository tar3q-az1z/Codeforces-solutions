#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<stack>
#include<queue>
#include<cstdio>
#include<set>
#include<unordered_set>
#include<cmath>
#include<algorithm>
#include<functional>
#include<utility>
#include<cstdlib>
using namespace std;
typedef long long int lli;
typedef size_t idx;
#define vi vector<int>
#define pb(n) push_back(n)
#define ln "\n"
#define sp ends
#define newline cout << ln
#define fastios ios_base::sync_with_stdio(false); cin.tie(0)


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	lli x;
	cin >> t;
	while(t--){
		cin >> x;
		lli temp = x;
		int dig = floor(log10(x)) + 1;
		
		for(int i = 0; i < dig; ++i){
			int v = temp % 10;
			if(v == 0){
				temp /= 10;
				continue;
			}
			if(x % v != 0){
				++x;
				i = -1;
				temp = x;
			}else temp /= 10;
		}
		cout << x << ln;
	}

	return 0;
}