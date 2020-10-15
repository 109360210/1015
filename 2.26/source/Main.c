#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c, d;
	scanf_s("%d %d",&a,&b);
	c = a;
	d = b;
	if (c == 0) {
		printf("材计ッ环琌材计计");
	}
	else {
		if (c > d) {
			if (c% d == 0) {
				printf("材计琌材计计");
			}
			else {
				printf("材计ぃ琌材计计");


			}
		}
		else {
			printf("材计材计ぃ琌计");
		}
	}
		


	return 0;
	system("pause");
}