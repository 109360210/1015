#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c, d, x;
	
	printf("�п�J����(cm):");
	scanf_s("%d", &a);
	printf("�п�J�魫(kg):");
	scanf_s("%d", &b);
	c = a;
	d = b;
	x = 10000 * d / (c*c);
	

	printf("BMI ����\n");
	printf("BMI<18.5:�魫�L��\n ");
	printf("18.5 <= BMI <= 24.9 :�魫�A��\n");
	printf(" 25 <= BMI <=29.9 :�魫�L��\n");
	printf(" 30<= BMI : �魫�W��\n");
	printf("�A��BMI: %d", x);
	if (x < 18.5) {
		printf("�魫�L��\n");
		return 0;
	}
	else if (18.5<= x && x<=24.9  )
	{
		printf("�魫�A��\n");
		return 0;
	}
	else if (25 <= x && x <= 29.9 )
	{
		printf("�魫�L��\n");
		return 0;
	}
	else if (30 <= x )
	{
		printf("�魫�W��\n");
		return 0;
	}
}
