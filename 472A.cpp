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

int r = 1000000 + 5;
vector<bool> prime(r, true);
void sieve(){
	prime[0] = prime[1] = false;
	for(int i = 2; i * i <= r - 1; ++i){
		if(prime[i]){
			for(int j = i * i; j <= r - 1; j += i) prime[j] = false;
		}
	}
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	sieve();
	int n;
	cin >> n;
	for(int i = 4; i <= n - 4; i += 2){
		if(!prime[n - i]){
			cout << i << ' ' << n - i << ln;
			break;
		}
	}
	return 0;
}
