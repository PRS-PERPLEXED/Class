#include<stdio.h>
//Global Variables
int num1;
int num2;
int equation;

int input(){ //Inputs
    printf("\nInput First Number: ");
    scanf("%d", &num1);
    printf("\nInput Second Number: ");
    scanf("%d", &num2);
   math();
}

int math(){ //Equation
    char ans[] = "Answer is: ";
    if(equation == 1){
    printf("%s %d + %d = %d", ans, num1, num2, num1 + num2);
    }
    else{
        if(equation == 2){
        printf("%s %d - %d = %d", ans, num1, num2, num1 - num2);
        }
        else{
            if(equation == 3){
            printf("%s %d x %d = %d", ans, num1, num2, num1 * num2);
            }
            else{
                if(equation == 4){
                printf("%s %d ÷ %d = %d", ans, num1, num2, num1 / num2);
                }
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

int main()
{
    printf("1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n");
    printf("Type the number of selected operations: ");
    scanf("%d", &equation);
    if(equation < 5){
        input();
    }
    else{
        printf("\nError! Pls Try Again\n");
        main();
    }
    return 0;
}
    