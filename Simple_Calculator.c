#include<stdio.h>


int main()
{
    int num1;
    int num2;
    int equation;
    printf("1 Addition \n2 Subtraction \n3 Multiplication \n4 Division \n");
    printf("Enter the Number of your Selected Operation: ");
    scanf("%d", &equation);
    printf("\nEnter First Number: ");
    scanf("%d", &num1);
    printf("\nEnter Second Number: ");
    scanf("%d", &num2);
    
    if(equation == 1){
        printf("%d", num1 + num2);
    }
    else{
        if(equation == 2){
            printf("%d", num1 - num2);
        }
        else{
            if(equation == 3){
                printf("%d", num1 * num2); 
            }
            else{
                printf("%d", num1 / num2);
            }
        }
    }
    char c[1];
    printf("\nContinue(y/n): ");
    scanf("%s", c) ;
    if (strcmp(c, "y") == 0) { 
        main();
    } 
    else {
        printf("edi wag");
        return 0;
    }
    
}