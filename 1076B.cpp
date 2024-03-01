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
const int MOD = 1000000007;

#define fastios ios_base::sync_with_stdio(false); cin.tie(0)

lli trial(lli n){
	for(lli d = 3; d * d <= n; d += 2){
		if(n == 1) break;
		while(!(n % d)){
			return d;
		}
	}
	return n;
}
int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	lli n;
	cin >> n;
	if(!(n % 2)) cout << n / 2 << ln;
	else{
		n -= trial(n);
		cout << (n / 2) + 1 << ln;
	}
	return 0;
}

