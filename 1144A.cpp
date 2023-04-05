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
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		bool flag = false;
		for(int i = 1; i < s.size(); ++i){
			int dif = s[i] - s[i - 1];
			if(dif == 0 || dif != 1){
				flag = true;
				break;
			}
		}
		if(flag) cout << "No\n";
		else cout << "Yes\n";
	}
	return 0;
}