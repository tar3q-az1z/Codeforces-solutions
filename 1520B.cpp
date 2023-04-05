#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;
typedef long long int lli;
typedef size_t idx;
const int mx = 1000000000;
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n <= 9) cout << n << "\n";
		else{
			bool flag = false;
			int cnt = 9;
			for(int i = 11; i >= 0; i = (i * 10) + 1){
				for(int j = 1; j <= 9; ++j){
					if(i*j > mx){
						flag = true;
						break;
					}
					if(n >= i*j){
						++cnt;
					}
				}
				if(flag) break;
			}
			cout << cnt << "\n";
		}
		
	}
	return 0;
}