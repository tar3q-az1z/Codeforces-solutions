#include<iostream>
#include<cstdlib>
int compare(const void *,const void *);
using namespace std;
int main(){
	int t,n,a[110],count,val,temp;
	cin>>t;
	while(t--){
		cin>>n;
		a[0]=0;
		count=1;
		temp=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			val=a[0];
			if(i>0 && a[i]==val){
				count++;
			}
		}
		if(count==n){
			cout<<0<<"\n";
			continue;
		}
		qsort(a,n,sizeof(int),compare);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					temp++;
					break;
				}
			}
		}
		cout<<temp<<"\n";
		
	}
	return 0;
}
int compare(const void *a,const void *b){
	return (*(int *)b - *(int *)a);
}
