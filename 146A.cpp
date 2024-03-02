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
	int n;
	string num;
	cin >> n;
	cin >> num;
	int sum1 = 0, sum2 = 0;
	for(int i = 0; i < n; ++i){
		if(num[i] == '4' || num[i] == '7'){
			if(i < n / 2){
				if(num[i] == '4') sum1 += 4;
				else sum1 += 7;
			}
			else{
				if(num[i] == '4') sum2 += 4;
				else sum2 += 7;
			}
		}else{
			sum1 = -1;
			break;
		}
	}
	if(sum1 == sum2) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
