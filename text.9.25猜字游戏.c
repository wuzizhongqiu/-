#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("****************************************\n");
	printf("******  ��ʼ��Ϸ:1   �˳���Ϸ:0  *******\n");
	printf("****************************************\n");
}
void game()
{
	int guess = 0;
	int ret = 0;
	 ret = rand()%200+1;
	//printf("%d\n", ret);
	 while (1)
	 {
		 printf("����1��200֮�������:");
		 scanf_s("%d", &guess);
		 if (guess > ret)
		 {
			 printf("�´���\n");
		 }
		 else if (guess < ret)
		 {
			 printf("��С��\n");
		 }
		 else
		 {
			 printf("��ϲ��¶��ˣ�����\n");
			 printf("������һ����^_^��\n");
			 break;
		 }
	 }

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
		menu();
		printf("��ѡ��");
			scanf_s("%d", &input);
			switch (input)
			{
			case 1:
				printf("��������Ϸ��ʼ������\n");
				game();
				break;
			case 0:
				printf("��Ϸ���˳�\n");
				break;
			default:
				printf("ѡ�����\n");
				printf("������ѡ�񣡣���\n");
				break;	

			} 
	} while (input);

	return 0;
}
////1*1
////2*1 2*2
////9*1
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,4,4,5,6,7,8,9,10 };
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	for (i = 0; i <sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int bian = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = bian * 1.0 / i + sum;
//		bian = -bian;
//	}
//	printf("%lf ", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//	    if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d", count);
//	return 0;
//}