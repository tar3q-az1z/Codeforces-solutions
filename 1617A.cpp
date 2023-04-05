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

	int t;
	cin >> t;
	while(t--){
		string s, T;
		cin >> s;
		cin >> T;
		sort(IT(s));
		for(int i = 0; i < s.length(); ++i){
			bool flag1 = false;
			if(s[i] == T[0]){
				for(int j = i + 1; j < s.length(); ++j){
					bool flag2 = false;
					if(s[j] == T[1]){
						for(int k = j + 1; k < s.size(); ++k){
							if(s[k] == T[2]){
								swap(s[j], s[k]);
								flag2 = true;
								break;
							}
						}
					}
					if(flag2){
						flag1 = true;
					}
				} 
			}
			if(flag1) break;
		}
		cout << s << ln;
	}

	return 0;
}