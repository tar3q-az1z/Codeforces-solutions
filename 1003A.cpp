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
	int n, ai;
	cin >> n;
	int arr[101] = {};
	for(int i = 0; i < n; ++i){
		cin >> ai;
		++arr[ai];
	}
	int mx = *max_element(arr, arr + 101);
	cout << mx << ln;
	return 0;
}

/*
some familiar issues & sugg.:
!----> [RE-READ THE CODE!]
!----> [invariants to array?]
!----> [what about freq of elem/chars?]
!----> [kinda back-tracking?]
!----> [use clear() at last if resize() used!]
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size and time limit]
!----> [No sync with puts fn]
!----> [prefix vs suffix]
!----> [binary search? -> ubd, lbd]
!----> [array contains duplicate values!]
!----> [(a/b+1)*b vs uceil(a,b)*b]
!----> [unq_v for vec only]
!----> [bitmask vs unsigned; (1ull << i) -> pow2]
!----> [use gcd(), NOT __gcd() for ai < 0]
!----> [rec. lambda: function<ret.type(param types,..)>fn_name = ....lambda fn && always dyn arr(vec, ..]

*/