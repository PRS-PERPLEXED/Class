#include<stdio.h>
#include<stdlib.h>

int order, quantity, total, payment;

int main(){
	char t[] = "\tTotal is:\t";
	char err[] = "\tError! Invalid";
	char ord[9999];
	char cont[99];
	char qty[999];
	char pay[9999];
	clrscr();
	printf("\n ===========================================================\n");
	printf(" [1] Meth Candy\t\t53$\t [6] Amogus\t\t69$\n");
	printf(" [2] Happy Pills\t24$\t [7] Some Mushroom\t47$\n");
	printf(" [3] Purple Curry\t12$\t [8] Chemical Romance\t35$\n");
	printf(" [4] Heroin Blast\t92$\t [9] Rugby Boost\t2$\n");
	printf(" [5] Definitely Coke\t64$\t[10] Snoopy dogg\t420$\n");
		odr:
	gotoxy(1,10);
	printf("\tInput Order:\t");
	scanf("%s", ord);
	order = atoi(ord);
		if(order < 11 && order > 0){
		qty:
		gotoxy(1,11);
		printf("\t\t\t");
		gotoxy(1,12);
		printf("\tInput Quantity:\t");
		scanf("%s", qty);
		quantity = atoi(qty);
			if(quantity > 0){
			gotoxy(1,13);
			printf("\t\t\t\t");
			goto math;
			}
			else{
				gotoxy(1,12);
				printf("\t\t\t\t\t\t\t\t");
				gotoxy(1,13);
				printf("%s\n", err);
				goto qty;
			}
		}
		else{
			gotoxy(1,11);
			printf("%s", err);
			gotoxy(1,10);
			printf("\t\t\t\t\t");
			goto odr;
		}
		math:
	gotoxy(35,10);
	if(order == 1){
	total += 53*quantity;
	printf("%s%d",t, total);
	}
	if(order == 2){
	total += 24*quantity;
	printf("%s%d",t, total);
	}
	if(order == 3){
	total += 12*quantity;
	printf("%s%d",t, total);
	}
	if(order == 4){
	total += 92*quantity;
	printf("%s%d",t, total);
	}
	if(order == 5){
	total += 64*quantity;
	printf("%s%d",t, total);
	}
	if(order == 6){
	total += 69*quantity;
	printf("%s%d",t, total);
	}
	if(order == 7){
	total += 47*quantity;
	printf("%s%d",t, total);
	}
	if(order == 8){
	total += 35*quantity;
	printf("%s%d",t, total);
	}
	if(order == 9){
	total += 2*quantity;
	printf("%s%d",t, total);
	}
	if(order == 10){
	total += 420*quantity;
	printf("%s%d",t, total);
	}
	else{
	}
		cont:
	gotoxy(1,14);
	printf("\tContinue(y/n):\t");
	scanf("%s", cont);
	if(strcmp(cont, "Y") == 0){
		gotoxy(1,10);
		printf("\t\t\t\t\n\t\t\t\t\n\t\t\t\t\n\t\t\t\t\n\t\t\t\t");
		gotoxy(1,10);
		goto odr;
	}
	else{
		if(strcmp(cont, "y") == 0){
			gotoxy(1,10);
			printf("\t\t\t\t\n\t\t\t\t\n\t\t\t\t\n\t\t\t\t\n\t\t\t\t");
			gotoxy(1,10);
			goto odr;
		}
		else{
			if(strcmp(cont, "N") == 0){
				goto pay;
			}
			else{
				if(strcmp(cont, "n") == 0){
					goto pay;
				}
				else{
					gotoxy(1,14);
					printf("\t\t\t\t\t\t\t\t");
					goto cont;
				}
			}
		}
	}
	pay:
	gotoxy(1,16);
	printf("\tInput Payment:\t");
	scanf("%s", pay);
	payment = atoi(pay);
	if(payment != 0 && payment >= total){
	printf("\tThanks for Purchasing!\n\tHeres your change:\t%d",payment - total);
	}
	else{
	gotoxy(1,16);
	printf("\t\t\t\t\t\t\t\t\t\t");
	goto pay;
	}
	getch();
	return 0;
}

