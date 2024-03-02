// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

#define ln              "\n" // no flush, oppos of endl
#define _flush          endl
#define stop_sync       ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios       cin.tie(nullptr) // no flush
#define lli             long long int
#define vi              vector<int>
#define vii             vector<lli>
#define vss             vector<string>
#define pb              push_back
#define ppb 	        pop_back
#define sz(x)           ((x).size())
#define all(x)          (x).begin(), (x).end()
#define bin_sc(a, x)    binary_search(all(a), x)
#define lbd(a, x)       lower_bound(all(a), x) // an iter.
#define ubd(a, x)       upper_bound(all(a), x) // an iter.
#define eq_seg(a, x)    equal_range(all(a), x) // a pair of lb, ub
#define FIXED(x)        cout << fixed << setprecision(x)
const long double PI = acos(-1.0L);

int main(void){
	
	#ifndef ONLINE_JUDGE
		//freopen("generator.txt", "r", stdin);
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int n;
	cin >> n;
	int ones(0), twos(0), threes(0), ai;
	int tx = 0;
	for(int i = 0; i < n; ++i){
		cin >> ai;
		if(ai == 4) ++tx;
		else if(ai == 3) ++threes;
		else if(ai == 2) ++twos;
		else ++ones;
	}
	if(threes > ones){
		tx += threes;
		tx += (twos / 2) + (twos % 2);
	}else if(threes < ones){
		tx += threes;
		ones -= threes;
		tx += (twos / 2);
		twos %= 2;
		if(twos){++tx; ones -= 2;}
		if(ones > 0){
			tx += ones / 4;
			if(ones % 4) ++tx;
		}
	}else{
		tx += threes;
		tx += (twos / 2) + (twos % 2);
	}
	cout << tx << ln;
	return 0;
}


/*
some familiar issues:
----> [look at global variables and their values]

*/
