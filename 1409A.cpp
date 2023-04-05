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
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int val = abs(b - a);
		int s = 0; int k = 10;
		while(val != 0){
			s = s + (val / k);
			val = val % k;
			--k;
		} 
		cout << s << endl;
	}
	return 0;
}