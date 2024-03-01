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

	int n;
	cin >> n;
	vi v(n);
	int mx = -1;
	for(auto &i: v){
		cin >> i;
		if(i > mx) mx = i;
	}
	vi f;
	for(int i = 1; i * i <= mx; ++i){
		if(!(mx % i)){
			f.pb(i);
			if(i != mx / i) f.pb(mx / i);
		}
	}
	for(int i = 0; i < f.size(); ++i){
		for(int j = 0; j < n; ++j){
			if(f[i] == v[j]){
				v[j] = -1;
				break;
			}
		}
	}
	cout << mx << ' ';
	cout << *max_element(v.begin(), v.end()) << ln;

	return 0;
}
