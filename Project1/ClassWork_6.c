#include <stdio.h>
#include <math.h>
#include "ClassWork_6.h"

//pre compiler
#define Ex3

#ifdef Ex3
          
void main()
{
	int num;
	printf("Enter your num using only '1, 2, 3'\n");
	scanf_s("%d", &num);
	printf("result : %d\n1 - num is divided by 3\n0 - num is not divided by 3", dividedBy3Result(num));
}
int dividedBy3Result(int a)
{
	if (dividedBy3Reminder(a) == 0)
		return 1;
	else
		return 0;
}

int dividedBy3Reminder(int a)
{
	if ((a % 10) == 1)
	{
		switch ((a / 10) != 0 ? dividedBy3Reminder(a / 10) : 0)
		{
		case 0:
			return 2;
		case 1:
			return 0;
		case 2:
			return 1;
		}
	}
	else if ((a % 10) == 2)
	{
		switch ((a / 10) != 0 ? dividedBy3Reminder(a / 10) : 0)
		{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		}
	}
	else if ((a % 10) == 3)
	{
		switch ((a / 10) != 0 ? dividedBy3Reminder(a / 10) : 0)
		{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		}
	}
}

#endif // DEBUG

#ifdef Ex00
int sum = 0;
void main()
{
	int num;
	printf("Enter your num\n");
	scanf_s("%d", &num);
	if(palindrome(num)==num)
		printf("1");
	else
		printf("0");
}

int palindrome(int num)
{
	if (num != 0)
	{
		sum = sum * 10 + (num % 10);
		palindrome(num / 10);
	}
	else
		return sum;
}

#endif // Ex1

#ifdef Ex1
void main()
{
	int num;
	printf("Enter your num\n");
	scanf_s("%d", &num);
	printf("%d", containsAnEvenDigit(num));

}

int containsAnEvenDigit(int a)
{
	if (a == 0)
	{
		return 0;
	}
	if ((a % 10) % 2 == 0)
		return 1;
	else
		containsAnEvenDigit(a / 10);
}
#endif // Ex2


