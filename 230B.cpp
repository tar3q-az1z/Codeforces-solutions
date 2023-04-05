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

int r = 100000005;
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
	fastios;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	sieve();
	lli x, n;
	cin >> n;
	while(n--){
		cin >> x;
		if(floor(sqrt(x)) == ceil(sqrt(x))){
			lli rv = sqrt(x);
			if(prime[rv]) cout << "YES\n";
			else cout << "NO\n";
			continue;
		}
		cout << "NO\n";
	}
	return 0;
}