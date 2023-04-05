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

	int n = 0;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
		while(!(a[i] % 2)) a[i] /= 2;
		while(!(a[i] % 3)) a[i] /= 3;
	}

	for(int i = 0; i < n - 1; ++i){
		if(a[i] != a[i + 1]){
			cout << "No\n";
			return 0;
		}
	}

	cout << "Yes\n";
	return 0;
}