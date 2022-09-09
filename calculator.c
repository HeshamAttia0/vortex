#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
   int no1,no2;
    float result;
    char op;    
     
    printf("please enter  first number:\n ");
    scanf("%d",&no1);
    printf("please enter second number:\n ");
    scanf("%d",&no2);
     
    printf("Choose operation (+,-,*,/,%):\n ");
    scanf(" %c",&op);
     
    result=0;
    switch(op)    
    {
        case '+':
            result=no1+no2;
            break;
             
        case '-':
          result=no1-no2;
            break;
        case '*':
           result=no1*no2;
            break;
             
        case '/':
            result=(float)no1/(float)no2;
            break;
             
        case '%':
            result=no1%no2;
            break;
        
		
		default:
            printf("try the calculations again\n");
    }
 
    printf("Result: %d %c %d = %.1f\n",no1,op,no2,result);
    return 0;
	
}
