#include<stdio.h>

main(){
	
	int i,j;
	int k=1;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%d",k);		
			k++;
		}
		printf("\n");
	}
}
