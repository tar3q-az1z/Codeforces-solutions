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

bool cmp1(pair<int, int> i, pair<int, int> j){ return i.first > j.first;}
bool cmp2(pair<int, int> i, pair<int, int> j){ return i.second < j.second;}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n, ai;
	cin >> n;
	vector<pair<int, int>> a;
	for(int i = 0; i < n; ++i){
		cin >> ai;
		a.pb(make_pair(ai, i + 1));
	}
	sort(IT(a), cmp1);
	int temp = a[0].first;
	a[0].first = 1;
	int cnt = 1;
	for(int i = 1; i < n; ++i){
		if(a[i].first == temp) {temp = a[i].first; a[i].first = a[i - 1].first; ++cnt;}
		else {temp = a[i].first; a[i].first = cnt + 1; ++cnt;}
	}
	sort(IT(a), cmp2);
	for(auto i : a) cout << i.first << ' ';
	newline;
	return 0;
}