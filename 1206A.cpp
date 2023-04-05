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
#include<utility>
#include<cstdlib>
using namespace std;
typedef long long int lli;
typedef size_t idx;
#define vi vector<int>
#define pb(n) push_back(n)
#define ln "\n"
#define sp ends
#define newline cout << ln
#define fastios ios_base::sync_with_stdio(false); cin.tie(0)


int main(){
	int n, m, ai;
	int arr1[405] = {}, arr2[405] = {};
	cin >> n;
	vi v1;
	for(int i = 0; i < n; ++i){
		cin >> ai;
		v1.pb(ai);
		++arr1[ai];
	}
	cin >> m;
	vi v2;
	for(int i = 0; i < m; ++i){
		cin >> ai;
		v2.pb(ai);
		++arr2[ai];
	}
	bool flag = false;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			int s = v1[i] + v2[j];
			if(arr1[s] == 0 && arr2[s] == 0){
				cout << v1[i] << ' ' << v2[j] << ln;
				flag = true;
				break;	
			}
		}
		if(flag) break;
	}
	return 0;
}