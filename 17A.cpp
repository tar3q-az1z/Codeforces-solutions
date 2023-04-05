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

int r = 1001;
vector<bool> prime(r, true);
vi lp;
void isprime(){
	prime[0] = prime[1] = false;
	for(int i = 2; i * i <= r - 1; ++i){
		if(prime[i]){
			for(int j = i * i; j <= r - 1; j += i) prime[j] = false;
		}
	}
	for(int i = 2; i < r; ++i){
		if(prime[i]) lp.pb(i);
	}
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	isprime();
	int n, k, cnt = 0;
	cin >> n >> k;
	for(int i = 2; i <= n; ++i){
		if(prime[i]){
			int r = i - 1;
			for(int i = 0; i < lp.size() - 1; ++i){
				if(lp[i] + lp[i + 1] == r) ++cnt;
			}
		}
	}
	if(cnt >= k) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}