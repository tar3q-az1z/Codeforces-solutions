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
	int a, b, c;
	cin >> a >> b >> c;
	int ans = 0;
	ans = max(ans, a + b + c);
	ans = max(ans, a * b * c);
	ans = max(ans, (a + b) * c);
	ans = max(ans, a * (b + c));
	ans = max(ans, a + (b * c));
	ans = max(ans, (a * b) + c);
	cout << ans << ln;
	return 0;
}
