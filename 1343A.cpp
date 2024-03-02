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

	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 2; i > 1; ++i){
			int div = pow(2, i);
			if(n % (div - 1) == 0){
				cout << n / (div - 1) << ln;
				break;
			}
		}
	}
	
	return 0;
}
