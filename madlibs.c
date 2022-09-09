#include <stdio.h>

int main(){
	
	char adjective[50];
	char noun[50];
	char verb[50];
	
	printf("please complete the sentences\n ");
	printf("there are many (adjective) _____ ways to choose an (noun) _____ to read\n");
	scanf("%s",&adjective);
	scanf("%s",&noun);
	printf("there are many %s ways to choose an %s to read\n",&adjective ,&noun);
	
	printf("i love (verb) ____ at vortex robotics\n");
	scanf("%s",&verb);
	printf("i love %s at vortex robotics",&verb);
	
	
	
	
}

