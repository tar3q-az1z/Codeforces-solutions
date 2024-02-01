#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<queue>
#include<cstdio>
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
#define ln endl
#define sp ends
int main(){
	int n, m;
	cin >> n >> m;
	vector<string> v(n);
	for(auto& i : v){
		cin >> i;
//		cout << i << ln;
	}
	pair<int, int> left (0, 0);
	pair<int, int> right (0, 0);
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(v[i][j] == 'B'){
				left = make_pair(i, j);
				i = -1;
				break;
			}
		}
		if(i == -1) break;
	}
	for(int i = n-1; i >= 0; --i){
		for(int j = m-1; j >= 0; --j){
			if(v[i][j] == 'B'){
				right = make_pair(i, j);
				i = -1;
				break;
			}
		}
		if(i == -1) break;
	}
	cout << ((left.first + right.first) / 2) + 1 << "\n";
	cout << ((left.second + right.second) / 2) + 1 << ln;
	return 0;
}
