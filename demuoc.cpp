#include<stdio.h>
int main(){
	int n,demuoc =0;
	scanf("%d", &n);
	for(int i=1; i<=n;i++){
		if(n%i==0){
			demuoc++;
		}
	}
		printf("%d  so %d uoc so la\n",n,demuoc);
		return 0;
		
	}