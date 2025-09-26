#include<stdio.h>
int main(){
	int n,i, sum=0;
	scanf("%d", &n);
	for(int i=1; i<=n;i++){
		if(n%i==0 && n !=i ){
			sum +=i;
		}
		}
		if(sum==n){
			printf("%d la so hoan hao\n", n);
		}else{
			printf("%d lp la so hoan hao\n",n);
		}
		return 0;
		}




