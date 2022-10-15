#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//Global Variables
int num1,num2,equation;

int input1(){ //Inputs
    char c1[999];
    printf("\nInput First Number: ");
    scanf("%s", c1);
    num1 = atoi(c1);
    if(num1 == 0){
        input1();
    }
    else{
        input2();
    }
    return 0;
}
int input2(){
    char c2[999];
    printf("\nInput Second Number: ");
    scanf("%s", c2);
    num2 = atoi(c2);
    if(num2 == 0){
        input2();
    }
    else{
        math();
    } 
    return 0;
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
    reset();
    return 0;
    
}
int reset(){
    char r[1];
    printf("\nContinue(y/n): ");
    scanf("%s", r) ;
    if (strcmp(r, "y") == 0) { 
        main();
    } 
    else {
        if (strcmp(r, "Y") == 0) { 
        main();
        } 
        else{
            if (strcmp(r, "n") == 0) { 
            return 0;
            } 
            else{
                if (strcmp(r, "N") == 0) { 
                return 0;
                } 
                else{
                reset();
                }
            }
        } 
    }


}
int main()
{
    char c[999];
    printf("\n1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n");
    printf("Type the number of selected operations: ");
    scanf("%c", c);
    printf("\n%s", c);
    equation = atoi(c);
    printf("\n%d", equation);
    if(equation == 1 || equation == 2 || equation == 3 || equation == 4){
        input1();
    }
    else{
        clrscr();
        main();
    }
    return 0;
}

    