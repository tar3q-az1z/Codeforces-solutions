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
#define loop(start, end, incre) for(int i = start; i < end; i += incre)
#define newline cout << ln
const int MOD = 1000000007;

#define fastios ios_base::sync_with_stdio(false); cin.tie(0)

int binpow(int b, int p){
	int ans = 1;
	while(p){
		if(p % 2) ans = (ans * b);
		b = (b * b);
		p /= 2;
	}
	return ans;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string s;
	cin >> s;
	int ans = 1;
	int l = s.length();
	int d = 0, ml = 1;
	for(int i = l - 1; i >= l - 2 && i >= 0; --i){
		d = d + (s[i] - 48) * ml; ml *= 10;
	}
	int p = d % 4;
	for(int i = 1; i <= 3; ++i){
		ans += binpow(i + 1, p);
	}
	cout << ans % 5 << ln;
	return 0;
}