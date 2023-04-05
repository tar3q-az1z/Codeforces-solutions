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

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t, n, m, i, j;
	cin >> t;
	while(t--){
		cin >> n >> m >> i >> j;
		
	    if(i == 1){
			cout << n << ' ' << 1 << ' ';
			cout << n << ' ' << m << ln;
		}else if(i == n){
			cout << 1 << ' ' << 1 << ' ';
			cout << 1 << ' ' << m << ln;
		}else{
			cout << 1 << ' ' << 1 << ' ';
			cout << n << ' ' << m << ln;
		}
	}

	return 0;
}