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

	int t, a, b, c;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		int p = (abs(a - b) - 1) * 2 + 2;
		int op1 = p / 2 + 1;
		if( a > p || b > p) cout << "-1\n";
		else if(c < op1){
			int d = op1 + abs(c - 1);
			if(d <= p && d >= op1 && d != a && d != b) cout << d << ln;
			else cout << "-1\n";
		}else{
			int d = 1 + abs(c - op1);
			if(d <= op1 && d >= 1 && d != a && d != b) cout << d << ln;
			else cout << "-1\n";
		}
	}
	return 0;
}