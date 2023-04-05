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

	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int cnt2 = 0, cnt3 = 0;
		vector<int> f;
		while(!(n % 2)){
			++cnt2;
			n /= 2;
		}
		while(!(n % 3)){
			++cnt3;
			n /= 3;
		}
		if(n > 1){
			cout << -1 << ln;
			continue;
		}
		if(cnt2 > cnt3){
			cout << -1 << ln;
			continue;
		}
		cout << (cnt3 - cnt2) + cnt3 << ln;

	}
	return 0;
}