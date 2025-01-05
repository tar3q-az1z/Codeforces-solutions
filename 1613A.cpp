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

	int p1, p2, t;
	int x1, x2;
	cin >> t;
	while(t--){
		cin >> x1 >> p1;
		cin >> x2 >> p2;
		int d1 = 0, d2 = 0;
		int tp1 = x1, tp2 = x2;
		while(tp1){
			++d1;
			tp1 /= 10;
		}
		while(tp2){
			++d2;
			tp2 /= 10;
		}
		if(d1 + p1 > d2 + p2) cout << ">\n";
		else if(d1 + p1 < d2 + p2) cout << "<\n";
		else{
			if(p1 == p2){
				if(x1 > x2) cout << ">\n";
				else if(x1 < x2) cout << "<\n";
				else cout << "=\n";
			}
			else if(p1 > p2){
				int dif = p1 - p2;
				if(d1 + dif > d2) cout << ">\n";
				else if(d1 + dif < d2) cout << "<\n";
				else{
					for(int i = 1; i <= dif; ++i) x1 *= 10;
					if(x1 > x2) cout << ">\n";
					else if(x1 < x2) cout << "<\n";
					else cout << "=\n";
				}
			}else{
				int dif = p2 - p1;
				if(d2 + dif > d1) cout << "<\n";
				else if(d2 + dif < d1) cout << ">\n";
				else{
					for(int i = 1; i <= dif; ++i) x2 *= 10;
					if(x1 > x2) cout << ">\n";
					else if(x1 < x2) cout << "<\n";
					else cout << "=\n";
				}
			}
		}
	}
	return 0;
}