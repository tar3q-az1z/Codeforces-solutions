#define _USE_MATH_DEFINES

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
#include<iomanip>
#include<utility>
#include<cstdlib>
using namespace std;
typedef long long int lli;
typedef size_t idx;
#define vi vector<int>
#define vl vector<lli>
#define pb(n) push_back(n)
#define ln "\n"
#define sp ends
#define IT(x) x.begin(), x.end()
#define loop(start, end, incre) for(int i = start; i < end; i += incre)
#define newline cout << ln
const int MOD = 1000000007;
#define precision(n) cout << fixed << setprecision(n) // n places after dec.point
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
		int r = 2 * n;
		for(int i = 0; i < r; ++i){
			if(i < r / 2) cout << "(";
			else cout << ")";
		}
		newline;
		for(int i = 0; i < n - 1; ++i){
			int j = 0;
			r = 2 * n;
			int tr = 0;
			for(j = 0; j < i + 1; ++j){
				cout << "()";
				tr += 2;
			}
			r -= tr;
			for(int k = 0; k < r; ++k){
				if(k < r / 2) cout << "(";
				else cout << ")";
			}
			newline;
		}
	}	
	return 0;
}