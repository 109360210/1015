#include<stdio.h>
#include<stdlib.h>
int main() {
	int x, y, z, a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("x= %d\n", a);
	printf("y= %d\n", b);
	printf("z= %d\n", c);
	x = a;
	y = b;
	z = c;
	if (x >= y && y >= z)
	{
		 {
			printf("Max is: %d\n", x);
			printf("Min is: %d\n", z);
			return 0;
		}
		 
	}
	else if  (x >= z && z >= y) {
		printf("Max is: %d\n", x);
		printf("Min is: %d\n", y);
		return 0;
	}
	
	if (y >= z && z >= x)
	{
		{
			printf("Max is: %d\n", y);
			printf("Min is: %d\n", x);
			return 0;
		}
		
	}
	else if (y >= x && x >= z) {
		printf("Max is: %d\n", y);
		printf("Min is: %d\n", z);
		return 0;
	}
	 if (z >= y && y >= x)
	{
		{
			printf("Max is: %d\n", z);
			printf("Min is: %d\n", x);
			return 0;
		}
		
	}
	else if  (z >= x && x >= y) {
		printf("Max is: %d\n", z);
		printf("Min is: %d\n", y);
		return 0;
	}
	 system("pause");
	}
