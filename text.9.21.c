#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char passward[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("mima");
		scanf_s("%s",passward);
		if (strcmp(passward, "123456") == 0)
		{
			printf("true");
			break;
		}
	}
	if (i = 3)
	{
		printf("shibai");
		}
	
	return 0;
	}

//int main()
//{
//	int k = 17; 
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		 else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("it is:%d\n", mid);
//			break;
//		}
//	}
//		if (left < right)
//		{
//			printf("zhaobudao\n");
//		}
//	
//	return 0;
//}
////int main()
////{
////	int n = 0;
////	int ret = 1;
////	int sum = 0;
////	for (n = 1; n <= 10; n++)
////	{
////		ret = ret * n;
////		sum = sum + ret;
////	}
////	printf("sum=%d\n", sum);
////	return 0;
////}
////int main()
////{
////	int n = 0;
////	int ret = 1;
////	int sum = 0;
////	for (n = 1; n <= 3; n++)
////	{
////		ret = ret * n;
////		sum = sum + ret;
////	}
////	printf("sum=%d\n", sum);
////	return 0;
////}
//////int main()
//////{
//////	int i = 0;
////	int n = 0;
////	int ret = 1;
////	int sum = 0;
////	for (n = 1; n <= 3; n++)
////	{
////		int ret = 1;
////		for (i = 1; i <= n; i++)
////		{
////			ret = ret * i;
////		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
////int main()
////{
////	int i = 0;
////	int n = 5;
////	int ret = 1;
////	for (i = 1; i <= n; i++)
////	{
////		ret = ret * i;
////	}
////	printf("ret=%d\n", ret);
////	return 0;
//}