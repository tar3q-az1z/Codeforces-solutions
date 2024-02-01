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
	int n, m, a, b;
	cin >> n >> m;
	int ox[101] = {};
	for(int i = 0; i < n; ++i){
		cin >> a >> b;
		for(int j = a; j <= b; ++j){
			ox[j] = 1;
		}
	}
	int cnt = 0;
	for(int i = 1; i <= m; ++i){
		if(ox[i] == 0) ++cnt;
	}
	cout << cnt << ln;
	for(int i = 1; i <= m; ++i){
		if(ox[i] == 0) cout << i << ' ';
	}
	cout << ln;
	return 0;
}
