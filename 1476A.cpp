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

	int n, k, t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		if(n == k) cout << '1' << ln;
		else if(n > k){
			if(n % k == 0) cout << '1' << ln;
			else{
				int num = (n / k) + 1;
				num = num * k;
				int cnt = 0;
				while(num){
					++cnt;
					num /= n;
				}
				cout << cnt << ln;
			}
		}else{
			if(k % n == 0) cout << k / n << ln;
			else cout << k / n + 1 << ln;
		}
	}

	return 0;
}