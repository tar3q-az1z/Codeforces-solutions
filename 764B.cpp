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
	fastios;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n = 0;
	cin >> n;
	int a[n];
	stack<int> l;
	for(int i = 0; i < n; ++i) cin >> a[i];
	int i = 0, j = n - 1;
	bool flag = false;
	while(i < j){
		if(!flag){cout << a[j] << ' '; l.push(a[i]); ++i; --j; flag = true;}
		else{cout << a[i] << ' '; l.push(a[j]); ++i; --j; flag = false;}
	}
	if(n % 2) cout << a[n / 2] << ' ';
	while(!l.empty()){
		cout << l.top() << ' ';
		l.pop();
	}
	newline;
	return 0;
}