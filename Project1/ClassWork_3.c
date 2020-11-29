#include <stdio.h>
#include <math.h>

//pre compiler
#define Ex8

void main()
{
#ifdef Ex1
	int a, b, c, max;

	printf("Please enter 3 numbers\n");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a > b)
		max = a;
	else
		max = b;

	if (max < c)
		max = c;

	printf("Max : %d", max);

#endif // Question #1

#ifdef Ex2
	int a, b;

	printf("Please enter 2 numbers\n");
	scanf_s("%d %d", &a, &b);

	if (a % 2 == 0 && b % 2 == 0 && a % b == 0)
		printf("Valid numbers");
	else
		printf("Invalid numbers");

#endif //Question #2

#ifdef Ex3
	//Question #3
	int a = 1500, p1, p2, p3;

	if (a > 99 && a < 1000)
	{
		p3 = a % 10;
		p2 = a / 10 % 10;
		p1 = a / 100 % 10;
		if (p1 > p2 && p1 > p3)
		{
			if (p2 > p3)
			{
				printf("very descending");
			}
			else
			{
				printf("descending");
			}
		}
		else if (p3 > p2 && p3 > p1)
		{
			if (p2 > p1)
			{
				printf("very ascending");
			}
			else
			{
				printf("ascending");
			}
		}
		else
		{
			printf("no this no this");
		}

	}
#endif

#ifdef Ex4
	int secs, HH, MM, SS;

	printf("Please enter number of seconds\n");
	scanf_s("%d", &secs);

	HH = secs / 60 / 60;
	MM = secs / 60 - (60 * HH);
	SS = secs - (60 * MM) - (60 * 60 * HH);

	printf("%02d:%02d:%02d", HH, MM, SS);

#endif //Question #4

#ifdef Ex5
	int day, month, year;

	printf("please enter day month and year\n");
	scanf_s("%d %d %d", &day, &month, &year);

	if ((day == 28 && month == 2 && year % 4 != 0) || (day == 29 && month == 2))
	{
		day = 01;
		month = month++;
	}
	else if (day == 30 && month % 2 == 0)
	{
		day = 01;
		month = month++;
	}
	else if (day == 31)
	{
		day = 01;
		month = month++;
	}
	else
	{
		day = day++;
	}

	printf("%d %d %d", day, month, year);

#endif //Question #5

#ifdef Ex6
	
	int x, y;

	printf("enter x and y oordinates\n");
	scanf_s("%d%d", &x, &y);
	
	if (x > 0 && y > 0 )
		printf("(%d,%d) is in Quardinate 1 (+,+)");
	else if(x > 0 && y < 0)
		printf("(%d,%d) is in Quardinate 4 (+,-)");
	else if(x < 0 && y > 0)
		printf("(%d,%d) is in Quardinate 2 (-,+)");
	else if (x < 0 && y < 0)
		printf("(%d,%d) is in Quardinate 3 (-,-)");
#endif // Ex6

#ifdef Ex7
	int x1, y1, x2, y2;
	double dist;

	printf("enter cooardinate one\n");
	scanf_s("%d%d", &x1, &y1);

	printf("enter cooardinate two\n");
	scanf_s("%d%d", &x2, &y2);

	dist = sqrt((pow(x1 - x2, 2)) + (pow(y1 - y2, 2)));
	printf("the distance is %lf", dist);
#endif // Ex7

#ifdef Ex8
	int a, b, c;
	double x1, x2;

	printf("enter a, b and c parameters for ax^2+-bx+-c = 0 \n");
	scanf_s("%d%d%d", &a, &b, &c);

	if ((b*b) - (4 * a * c) < 0)
		printf("math error");
	else
	{
		x1 = (-b + sqrt((b*b) - (4 * a*c))) / (2 * a);
		x2 = (-b - sqrt((b*b) - (4 * a*c))) / (2 * a);
		printf("x1 = %lf\nx2 = %lf", x1, x2);
	}

#endif // Ex8

#ifdef Ex9

#endif // Ex9

}