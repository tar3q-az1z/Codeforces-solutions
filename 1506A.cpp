#include<iostream>
using namespace std;
typedef long long int lli;
int main(){
	lli t,n,m,x;
	cin>>t;
	while(t--){
		cin>>n>>m>>x;
		lli row=x%n; 
		lli col=x/n +1;
		if(row==0){
			row=n;
			col=x/row;
		}
		lli value=(m*(row-1))+col;
		cout<<value<<"\n";
	}
	return 0;
}