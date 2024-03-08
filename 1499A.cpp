#include<iostream>
using namespace std;
int main(){
	int t,n,k1,k2,w,b;
	cin>>t;
	while(t--){
		cin>>n>>k1>>k2;
		cin>>w>>b;
		int suitdomw=(k1+k2)/2;
		int suitdomb=(2*n)-(k1+k2);
		suitdomb=suitdomb/2;
		if((w<=suitdomw) && (b<=suitdomb)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

