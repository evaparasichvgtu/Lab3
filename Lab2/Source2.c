#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define D 2.54
#define P 2.32
#include <locale.h>
#include <math.h>

int task_1();
int task_2();
int task_3();
int homework();

int main() {
	task_1();
	task_2()
	task_3();
	homework();
	return 0;
}  

int task_1() {
	setlocale(LC_CTYPE, "RUS");
	int num, num1;
	puts("введите первое число:");
	scanf("%d", &num);
	printf("введено число %d\n", num);
	puts("введите второе число:");
	scanf("%d", &num1);
	printf("введено число %d\n", num1);
	printf("%d + %d = %d\n", num, num1, num + num1);
	printf("%d - %d = %d\n", num, num1, num + num1);
	printf("%d * %d = %d\n", num, num1, num * num1);
	printf("%d / %d = %.4f\n", num, num1, (float)num / num1);
	printf("%d %% %d = %d\n", num1, num, num1 % num);
	return 0;
}

int task_2() {
	setlocale(LC_CTYPE, "RUS");
	int dym;
	float res, res1;
	puts("введите число для рассчёта:");
	scanf("%d", &dym);
	res = D * dym;
	res1 = P * dym;
	printf("%d английских дюймов – это %.1f см\n %d испанских дюймов - это %.1f см\n", dym, res, dym, res1);
	return 0;
}

int task_3() {
	setlocale(LC_CTYPE, "RUS");
	float a, b;
	scanf("%f", &a);
	scanf("%f", &b);
	printf("---------------------------------------------------------\n");
	printf("|%17s||%17s||%17s|\n", "a*b", "a+b", "a-b");
	printf("---------------------------------------------------------\n");
	printf("|%10.0f*%-6.0f||%10.0f+%-6.0f||%10.0f-%-6.0f|\n", a, b, a, b, a, b);
	printf("---------------------------------------------------------\n");
	printf("|%17.0f||%17.0f||%17.0f|\n", a * b, a + b, a - b);
	printf("---------------------------------------------------------\n");
	return 0;
}
// 18
int homework() {
	setlocale(LC_CTYPE, "RUS");
	int a, b;
	printf("введите длину первого катета прямоугольного треугольника:\n");
	scanf("%d", &a);
	printf("введите длину второго катета прямоугольного треугольника:\n");
	scanf("%d", &b);
	int c = sqrt(a * a + b * b);
	printf("длина гипотенузы прямоугольного треугольника = %d\n", c);
	return 0;
}

