#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lli;
bool binsearch(lli);
lli cube[10005];
lli i;
void DoCube(){
	for(i=1;i<10001;i++){
	cube[i]=i*i*i;
}
}
int main(){
	lli x,t,item;
	bool flag;
	DoCube();
	cin>>t;
	while(t--){
		cin>>x;
		flag=false;
		for(lli j=1;j<10001;j++){
			item=x-cube[j];
			//cout<<"item: "<<item<<endl;
			if(cube[j]>=x){
				break;
			}
			if(binsearch(item)){
				cout<<"YES\n";
				flag=true;
				break;
			}
		}
		if(!flag) cout<<"NO\n";
	}
	return 0;
}
bool binsearch(lli item){
	lli left=1,right=10000,mid;
	while(left<=right){
		mid=left+((right-left)/2);
		if(item==cube[mid]) return true;
		if(item<cube[mid]) right=mid-1;
		else left=mid+1;
	}
	return false;
}
