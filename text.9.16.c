#include<stdio.h>
int main()
{
	char at = 'w';
	char* rr = & at;
	printf("%d\n", sizeof(rr));
//	*rr = 'a';
//	printf("%c\n", at);

	return 0;
}
//int main()
//{
//	int a = 10;
//		int* p = &a;
//		* p = 20;
//		printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//   return 0;
//}
//#define max 100
//int main()
//{
//	int a = max;
//	return 0;
//}