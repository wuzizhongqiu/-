#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		 a = b;
//		 b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		 a = c;
//		 c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		 b = c;
//		 c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int m = 60;
//	int n = 24;
//	int r = 0;
//	scanf_s("%d%d", &n, &m);
//	while (r=m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", r);
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	int c = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//			c++;
//		}
//		else if(y % 400 == 0)
//		{ 
//			printf("%d ", y);
//			c++;
//		}
//	}
//	printf("\nshulang = %d\n", c);
//	return 0;
//}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			printf("%d ", i);
		}
	}

	return 0;
}