#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j, k ;
	printf("number     square       cube");
	printf("\n");
	for (i = 0; i < 11; i = i++) {

		k = i * i*i;j = i * i;

		printf("%d           %d           %d", i, j, k);
		printf("\n");


	}
	system("pause");
}