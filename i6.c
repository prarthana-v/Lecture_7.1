#include<stdio.h>

main(){
	
	char i,j;
	char k='A';
	
	for(i='A'; i<='E'; i++){ 
	
		for(j='A'; j<='E'; j++){
			printf("%c",k);		
			k++;
		}
		
		printf("\n");
	}
}
