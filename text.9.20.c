#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret=%d\n", ret);
	return 0;
}
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	
//	return 0;
//}
////int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
////int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0', ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int ch = 0;
//int main()
//{
//	int ret = 0;
//	char passward[20] = {0};
//	printf("密码:");
//	scanf_s("%s", passward);
//	while ((ch=getchar()) != '\n')
//	{
//		;
//	}
//	printf("y/f");
//	ret = getchar();
//	if (ret == 'y')
//		printf("确认");
//	else
//		printf("取消");
//	return 0;
//}
////int main()
////{
////	int a = 0;
////	while ((a = getchar()) != EOF)
////	{	 
////		putchar(a);
////	}
////	return 0;
////}
//
