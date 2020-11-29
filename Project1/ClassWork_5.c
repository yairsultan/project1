#include <stdio.h>
#include <math.h>

//pre compiler
#define Ex1

#ifdef Ex1

double calculate(int a, int b, char c);

void main()
{
	int num1, num2;
	double res;
	char char1;

	printf("enter your equation: (use only + , - , / , * , % )\n");
	scanf_s("%d", &num1);
	scanf_s(" %c", &char1);
	scanf_s("%d", &num2);
	res = calculate(num1, num2, char1);
	if (res != 0) {
		if (char1 == '/')
			printf("result: %lf", res);
		else {
			printf("result: %.0lf", res);
		}
	}
}

double calculate(int a, int b, char c) {
	double result;

	switch (c)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = (double)a / b;
		break;
	case '%':
		result = a % b;
		break;
	default:
		printf("invalid input\n");
		result = 0;
	}
	return result;
}
#endif // Ex1

#ifdef Ex2
int oppositeNum(a);
int num, res;

void main()
{
	printf("enter your number\n");
	scanf_s("%d", &num);
	res = oppositeNum(num);
	printf("the opposite number is: %d\n", res);
}

int oppositeNum(a) {
	int result=a,count=0;
	while (result > 0)
	{
		result /= 10;
		count++;
	}
	result = 0;
	for (; count > 0; count--) {
		result += (a % 10) * pow(10, count-1);
		a /= 10;
	}
	return result;
	}
#endif // Ex2

#ifdef Ex3
int num;
int dividersSum(a);

void main() 
{
	printf("enter your number\n");
	scanf_s("%d", &num);
	num > 1 ? printf("dividers sum is: %d", dividersSum(num)) : printf("Invalid input");
}

int dividersSum(a) 
{
	int sum = 1;
	for (int i = 2 ; i <= (a / 2); i++)
	{
		if (a % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}
#endif // Ex3

#ifdef Ex4
int num;
int isPrimer(a);

void main()
{
	printf("enter your number\n");
	scanf_s("%d", &num);
	printf("%d",isPrimer(num));
}

int isPrimer(a)
{
	int primerFlag = 1;
	for (int i = 2; i <= (a / 2); i++)
	{
		if (a % i == 0)
		{
			primerFlag = 0;
			break;
		}
	}
	a < 2 ? primerFlag = 0 : a;
	return primerFlag;
}
#endif // Ex4

#ifdef Ex5
int gratesDivider(a);
int num1, num2, num3;

void main()
{
	printf("enter 3 numbers:\n");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("%d", gratesDivider(num1, num2, num3));
}

int gratesDivider(a, b, c)
{
	int ln,gcd;
	ln = (a < c ? (a < b ? a : b) : c < b ? c : b) / 2;
	for (; ln >= 1; ln--)
	{
		if (a % ln == 0 && b % ln == 0 && c % ln == 0)
		{
			gcd = ln;
			break;
		}
	}
	return ln;
}
#endif // Ex5

