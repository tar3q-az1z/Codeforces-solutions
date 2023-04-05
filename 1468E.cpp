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
		int arr[4];
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
		sort(arr, arr + 4);
		cout << arr[0] * arr[2] << endl;
	}
	return 0;
}