#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c, d;
	scanf_s("%d %d",&a,&b);
	c = a;
	d = b;
	if (c == 0) {
		printf("�Ĥ@�ƥû��O�ĤG�ƪ�����");
	}
	else {
		if (c > d) {
			if (c% d == 0) {
				printf("�Ĥ@�ƬO�ĤG�ƪ�����");
			}
			else {
				printf("�Ĥ@�Ƥ��O�ĤG�ƪ�����");


			}
		}
		else {
			printf("�Ĥ@�Ƥp��ĤG�Ʀ]�����O����");
		}
	}
		


	return 0;
	system("pause");
}