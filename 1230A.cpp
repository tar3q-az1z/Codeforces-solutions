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
	int arr[4];
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
	sort(arr, arr + 4);
	if((arr[0] + arr[3]) == (arr[1] + arr[2])){
		cout << "YES\n";
	}else if(arr[0] == (arr[1] + arr[2] + arr[3])){
		cout << "YES\n";
	}else if(arr[1] == (arr[0] + arr[2] + arr[3])){
		cout << "YES\n";
	}else if(arr[2] == (arr[0] + arr[1] + arr[3])){
		cout << "YES\n";
	}else if(arr[3] == (arr[0] + arr[1] + arr[2])){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
	return 0;
}
