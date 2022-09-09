#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int z;
	int j;
	int NoOfRows;
	printf("please enter the number of rows");
	scanf("%d",&NoOfRows);
	
	
	if(NoOfRows>=2 && NoOfRows<=5){
	
	for(i = 1;i<=NoOfRows;i++){
		
		for(j = 1; j<=(NoOfRows-i);j++){
	       printf(" ");
	   }
	   for(z = 1 ; z<=((2*i)-1);z++){
	        printf("*");
		}
		printf("\n");
	}
  }
}
