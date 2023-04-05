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
int main(){
	int t;
	lli n;
	cin >> t;
	while(t--){
		cin >> n;
		lli put = n, dig_sum = 0;
		int cnt = floor(log10(put)) + 1;
		for(int i = 0; i < cnt; ++i){
			dig_sum = dig_sum + (put % 10);
			put /= 10;
		}
		while(__gcd(n, dig_sum) == 1){
			++n;
			put = n, dig_sum = 0;
			cnt = floor(log10(put)) + 1;
			for(int i = 0; i < cnt; ++i){
				dig_sum = dig_sum + (put % 10);
				put /= 10;
			}
		}
		cout << n << "\n";
	}
	return 0;
}