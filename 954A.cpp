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
	int n;
	string s;
	cin >> n;
	cin >> s;
	int cnt = 0;
	for(int i = 0; i < n - 1; ++i){
		if((s[i] == 'R' && s[i+1] == 'U') || (s[i] == 'U' && s[i+1] == 'R')){
			++cnt;
			++i;
		}
	}
	cout << n - cnt;
	return 0;
}