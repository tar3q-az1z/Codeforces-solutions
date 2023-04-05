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


// int r = 1000001;
// vector<bool> p(r + 1, true);
// void isp(){
// 	p[0] = p[1] = false;
// 	for(int i = 2; (lli)i * i <= r; ++i){
// 		if(p[i]) for(int j = i * i; j <= r; j += i) p[j] = false;
// 	}
// }

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	// isp();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n % 2 == 0){
			cout << 2 << ' ' << n - 3 << ' ' << 1 << ln;
		}else{
			n -= 1;
			int j = 3;
			while(1){
				if(__gcd(j, n - j) == 1){
					cout << j << ' ' << n - j << ' ' << 1 << ln;
					break;
				}
				j += 2;
			}
		}
	}

	return 0;
}