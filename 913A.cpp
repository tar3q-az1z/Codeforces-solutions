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

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n, m;
	cin >> n;
	cin >> m;
	lli ans = 1;
	lli b = 2;
	while(n){
		if(n % 2) ans = ans * b;

		if(ans > m || b > m){
			cout << m << ln;
			return 0;
		}

		b *= b;
		n /= 2;
	}
	
	if(ans == m) cout << '0' << ln;
	else cout << (m % ans) << ln;

	return 0;
}