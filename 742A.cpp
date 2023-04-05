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
const lli MOD = 1000000007;

lli binpow(lli b, lli p){
	lli ans = 1;
	while(p){
		if(p % 2) ans = (ans * b) % 10;
		b = (b * b) % 10;
		p /= 2;
	}
	return ans;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int p, b = 8;
	cin >> p;
	cout << binpow(b, p) << ln;

	return 0;
}