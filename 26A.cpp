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

bool trial(int n){
	set<int> dv;
	while(!(n % 2)){
		n /= 2;
		dv.insert(2);
	}
	for(int d = 3; d * d <= n; d += 2){
		if(n == 1) break;
		while(!(n % d)){
			n /= d;
			dv.insert(d);
		}
	}
	if(n > 1) dv.insert(n);
	if(dv.size() == 2) return true;
	else return false;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin >> n;
	int cnt = 0;
	for(int i = 1; i <= n; ++i){
		if(trial(i)) ++cnt;
	}
	cout << cnt << ln;
	return 0;
}
