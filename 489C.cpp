// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

#define ln              "\n" // no flush, oppos of endl
#define _flush          endl
#define stop_sync       ios::sync_with_stdio(false) // not to use c-style io
#define untie_ios       cin.tie(nullptr) // no flush
#define lli             long long int
#define vi              vector<int>
#define vii             vector<lli>
#define vch             vector<char>
#define double          long double
#define vss             vector<string>
#define vpp(T1, T2)     vector<pair<T1, T2>>
#define pq              priority_queue // high prec.
#define pqq(T)          priority_queue<T, vector<T>, greater<T>> 			
#define pb              push_back
#define ppb 	        pop_back
#define mp              make_pair
#define Fi(p)           get<0>(p)
#define Sc(p)           get<1>(p)
#define sz(x)           int ((x).size())
#define all(x)          (x).begin(), (x).end()
#define bin_sc(a, x)    binary_search(all(a), x)
#define lbd(a, x)       lower_bound(all(a), x) // an iter.
#define ubd(a, x)       upper_bound(all(a), x) // an iter.
#define eq_seg(a, x)    equal_range(all(a), x) // a pair of lb, ub
#define FIXED(x)        cout << fixed << setprecision(x)
#define _print(x)       cout << #x << ": " << x << ln;
const double PI = acos(-1.0L);
const int MOD = (1e9) + 7;


string mx = "";
vector<string> dp(1000, "");
string ways(int x, int l){
	if(l == 0 && x != 0){
		return "-1";
	}
	if(l == 0) return "";
	if(!dp[x].empty()) return dp[x];
	for(int i = 9; i >= 0; --i){
		if(x < i) continue;
		string s("");
		s.pb('0' + i);
		s = s + ways(x - i, l - 1);
		mx = max(mx, s);
		//return dp[x] = mx;
	}
	return dp[x] = mx;
}

int main(void){
	//stop_sync;
	//untie_ios;
	#ifndef ONLINE_JUDGE
		//freopen("generator.txt", "r", stdin);
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	
	int m, s;
	cin >> m >> s;
	if(s == 0){
		if(m == 1) cout << "0 0\n";
		else cout << "-1 -1\n";
		return 0;
	}
	if(m == 1){
		if(s <= 9) cout << s << ' ' << s << ln;
		else cout << "-1 -1\n";
		return 0;
	}
	ways(s, m);
	int l = sz(dp[s]);
	if(dp[s].substr(l - 2, 2) == "-1") cout << "-1 -1\n";
	else{
		string mn = dp[s];
		sort(all(mn));
		int i = 0;
		if(mn[i] == '0'){
			while(mn[i] == '0') ++i; 
			mn[0] = '1';
			--mn[i];
		}
		cout << mn << ' ' << dp[s] << ln;
	}
	return 0;
}


/*
some familiar issues:
!----> [look at global variables and their values]
!----> [llabs() for long long int type]
!----> [look at input size]
!----> [No sync with puts fn]

*/