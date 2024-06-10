#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long int lli;
typedef size_t idx;// <cstdio>


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int>v(n);
		for(auto& i : v) cin >> i;
		int cnt = 0;
		for(int i = 0; i < v.size()-1; ++i){
			for(int j = i + 1; j < v.size();++j){
				if(__gcd(v[i],2 * v[j]) > 1){
					++cnt;
				}
				else{
					if(__gcd(2*v[i], v[j]) > 1){
						++cnt;
					}
				}
			}
		}
		cout << cnt << "\n";
		v.clear();
	}
	return 0;
}