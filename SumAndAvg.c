#include <stdio.h>


int main(){
   int num_1,num_2, num_3;
    float result;
    float average;
        
     
    printf("Enter  first number:\n ");
    scanf("%d",&num_1);
    printf("Enter second number:\n ");
    scanf("%d",&num_2);
    printf("Enter third number:\n ");     
    scanf("%d",&num_3);
    
     result= num_1+ num_2+  num_3;
     average= (result)/3;

    printf("Sum: %d + %d + %d = %.1f\n \nAverage: %.1f ",num_1,num_2,num_3,result,average);
    return 0;
	
}
