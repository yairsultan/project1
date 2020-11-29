#include <stdio.h>

//pre compiler
#define Ex3

void main()
{

#ifdef Ex2
	int i, n, num, last_num;
	short unsigned isAscending = 1;
	
	printf("enter your n");
	scanf_s("%d", &n);
	if (n <= 0)
		printf("Invalid input\n");
	else 
	{
		do
		{
			scanf_s("%d", &num);
			i++;
			

		} while (i < n);
	}

#endif // Ex2

#ifdef Ex3
	int n, sum;

	printf("enter your n");
	scanf_s("%d", &n);


#endif // Ex3


}