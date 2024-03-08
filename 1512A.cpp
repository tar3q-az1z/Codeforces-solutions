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
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vi v(n);
		for(auto& i : v){
			cin >> i;
		}
		for(int i = 2; i < v.size(); ++i){
			if(v[i] != v[i-1] || v[i] != v[i-2]){
				if(v[i] == v[i - 1]){
					cout << i - 2 + 1 << ln;
					break;
				}
				else if(v[i] == v[i - 2]){
					cout << i << ln;
					break;
				}
				else{
					cout << i + 1 << ln;
					break;
				}
			}
		}
	}
	return 0;
}
