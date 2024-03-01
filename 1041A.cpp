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
	int n;
	cin >> n;
	vi v(n);
	for(auto &i : v) cin >> i;
	sort(v.begin(), v.end());
	int cnt = 0;
	for(int i = 1; i < n; ++i){
		if(v[i] - v[i - 1] > 1) cnt += v[i] - v[i - 1] - 1;
	}
	cout << cnt << ln; 
	return 0;
}
