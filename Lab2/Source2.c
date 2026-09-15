#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define      D       2.54
#define      P       2.32
#include <locale.h>
int task_1() {
	setlocale(LC_CTYPE, "RUS");
	int num, num1;
	puts("введите первое число:");
	scanf("%d", &num);
	printf("введено число %d\n", num);
	system("pause");
	puts("введите второе число:");
	scanf("%d", &num1);
	printf("введено число %d\n", num1);
	system("pause");
	printf("%d + %d = %d\n", num, num1, num + num1);
	printf("%d - %d = %d\n", num, num1, num - num1);
	printf("%d * %d = %d\n", num, num1, num * num1);
	printf("%d / %d = %.2f\n", num, num1, (float)num / num1);
	printf("%d %% %d = %d\n", num, num1, num1 % num);
	return 0;
}

int task_2() {
	setlocale(LC_CTYPE, "RUS");
	int dym;
	float res, res1;
	puts("введите значение дл€ расчЄта:");
	scanf("%d", &dym);
	res = D * dym;
	res1 = P * dym;
	printf("%d английских дюймов Ц это %.1f см, %d испанских дюймов Ц это %.1f см", dym, res, dym, res1);
	return 0;
}

int task_3() {
	setlocale(LC_CTYPE, "RUS");
	float a = 3, b = 5;
	// printf("введите число a:\n");
	// scanf("%f", &a);
	// printf("введите число b:\n");
	// scanf("%f", &b);
	printf("---------------------\n");
	printf("|%17s||%17s||%-17s|\n", "a*b", "a+b", "a-b");
	printf("---------------------\n");
	printf("|%10.0f*%-6.0f||%10.0f*%-6.0f||%10.0f*%-6.0f|\n", a, b, a, b, a, b);
	printf("---------------------\n");
	return 0;
}

int main() {
	// task_1();
	// task_2();
	task_3();
	return 0;
}