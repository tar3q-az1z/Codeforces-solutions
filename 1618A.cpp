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


//void bs()
int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int t;
	
	cin >> t;
	while(t--){
		vi b(7, 0);
		for(auto &i : b) cin >> i;
		vi a;
		int x = b[6] - b[0];
		a.pb(b[0]);
		for(int i = 1; i < 5; ++i){
			for(int j = i + 1; j < 6; ++j){
				if(b[i] + b[j] == x){
					a.pb(b[i]);
					a.pb(b[j]);
					break;
				}
			}
			if(a.size() == 3) break;
		}
		for(auto i : a) cout << i << ' ';
		newline;
	}
	return 0;
}