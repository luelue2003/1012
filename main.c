#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num = 0;
	int num2 = 4;
	int a=0;
	while (num < 4){
		a=0;
		while(a<=num){
			printf("*");
			a++;
		}
		printf("\n");
		num++;
	}
	while (num2 >= 0){
	  	a=0;
		while(a<=num2){
			printf("*");
			a++;
		}
		printf("\n");
		num2--;
	}
	return 0;
}
