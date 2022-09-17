#include<stdio.h>
struct book
{
	char name[20];
	short price;
};
int main()
{
	struct book b1 = { "好好好",100 };
	printf("书名:%s\n", b1.name);
	printf("价格:%d元\n", b1.price);


	return 0;
}
//int main()
//{
//	double a = 1.33;
//	double* j = &a;
//	printf("%d\n", sizeof(j));
//	return 0;
//}
//int main()
//{
//	double l = 3.19;
//	double* a = &l;
//	*a = 5.6;
//	printf("%lf\d", l);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);
//	int* p = &a;
//	*p = 20;
//	printf("a=%d\n", a);
//
//	//printf("%p\n".p);
//	return 0;
//}
////int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//
//	}
//	printf("%d\n", max);
//	return 0;
//}