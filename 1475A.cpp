#include<stdio.h>
#include<math.h>
int main(){
	long long int t,n,flag,i;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		flag=0;
		if((n%2!=0) && (n%n==0)){
			printf("YES\n");
			flag=1;
		}
		else{
			if(ceil(log2(n))==floor(log2(n))){
				flag=0;
			}
			else{
				printf("YES\n");
				flag=1;
			}
		}
		
		
		if(flag==0){
			printf("NO\n");
		}
	
	}
	
	return 0;
}