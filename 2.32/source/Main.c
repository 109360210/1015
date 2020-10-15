#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c, d, x;
	
	printf("請輸入身高(cm):");
	scanf_s("%d", &a);
	printf("請輸入體重(kg):");
	scanf_s("%d", &b);
	c = a;
	d = b;
	x = 10000 * d / (c*c);
	

	printf("BMI 指標\n");
	printf("BMI<18.5:體重過輕\n ");
	printf("18.5 <= BMI <= 24.9 :體重適中\n");
	printf(" 25 <= BMI <=29.9 :體重過重\n");
	printf(" 30<= BMI : 體重超重\n");
	printf("你的BMI: %d", x);
	if (x < 18.5) {
		printf("體重過輕\n");
		return 0;
	}
	else if (18.5<= x && x<=24.9  )
	{
		printf("體重適中\n");
		return 0;
	}
	else if (25 <= x && x <= 29.9 )
	{
		printf("體重過重\n");
		return 0;
	}
	else if (30 <= x )
	{
		printf("體重超重\n");
		return 0;
	}
}
