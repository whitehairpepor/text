#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
////i/*nt main()
////{
//	int a = 0;
//	int n = 0;
//	int sum = 1;
//	int ret = 0;
//	for (a=1;a<=3;a++)
//	{
//		sum = sum * a;
//		ret = ret + sum;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//	
//}*/
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int c = 0;
//	int k = 8;
//	c = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = c - 1;
//	while (left <= right)
//	{
//		int sum = (left + right) / 2;
//		if (arr[sum] > k)
//		{
//			right = sum - 1;
//		}
//		else if (arr[sum] < k)
//		{
//			left = sum + 1;
//		}
//		else
//		{
//			printf("zhaodaole;%d\n", sum);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "welcome to you!!!!!!!";
//	char arr1[] = "#####################";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left <= right)
//	{
//		printf("%s\n", arr1);
//		arr1[left] = arr[left];
//		arr1[right] = arr[right];
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//		
//	}
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	int a = 1;
//	double sum = 0.0;
//	for (i = 1; i < 100;i++)
//	{
//		sum += a*1.0/ i;
//		a = -a;
//	}
//	printf("%f", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int i = 0;
//	int a = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (a < arr[i])
//		{
//			a = arr[i];
//		}
//
//	}
//	printf("max=%d\n", a);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	
//	
//	for (x = 1; x <= 9; x++)
//	{
//		
//		int y = 0;
//		for (y = 1; y <= x; y++)
//		{
//			
//			printf("%d*%d=%-2d ", y,x,x*y);
//		}
//		printf("\n");
//	}
//	return 0;
////}
//#include <stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**************\n");
//	printf("**猜游戏数字**\n");
//	printf("**1play 0exit**\n");
//}
// //RAND_MAX-随机数最大值
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请猜数字》：");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input;
//	srand ((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择》：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("start\n");
//			break;
//		case 0:
//			printf("exit\n");
//			break;
//		default:
//			printf("fault\n");
//			break;
//		}
//	} while (input);
//		return 0;
//}
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意你的电脑将在1分钟后关机，如果输入你是猪，就取消关机\n请输入》：");
//	scanf("%s", input);
//	if (strcmp(input, "你是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "bit! dasczxc";
//	memset(arr1, 'i', 5);
//	printf("%s\n",arr1);
//	
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[40] = "*** ***";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int getmax(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int sum = getmax(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//void get(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	get(a, b);
//	printf("a=%d b=%d\n", a, b);
// retrun 0;
//}
//void get1(int *x, int *y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	 get1(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	scanf("%s", input);
//	if (strcmp(input,"hello") == 0)
//	{
//		system("shutdown -a");
//	}
//	return 0;
//}
//#include<math.h>
//int pm(int x)
//{
//	int n = 0;
//	for (n = 2; n < sqrt(x); n++)
//	{
//		if (x %n == 0)
//			return 0;
//	}
//			return 1;
//	
//		
//
//	
//}
//int main()
//{
//	int a = 0;
//
//	int c = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		if (pm(a) == 1)
//		{
//			printf(" %d\n", a);
//		}
//	}
//	return 0;
//}
//int leapyear(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (leapyear(a) == 1)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	scanf("%s",input);
//	if (strcmp(input, "he") == 0)
//	{
//		system("shutdown -a");
//	}
//	return 0;
//}
