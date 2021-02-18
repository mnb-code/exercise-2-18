#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//输入一个整形数后，按顺序打印每个数字
//void print(int n)
//{
//
//	if (n > 9)
//	{
//		print(n/10);
//		printf("%d\n", n=n % 10);
//	}
//	else
//	{
//		printf("%d\n", n);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//
//	return 0;
//}
//编写一个函数，不使用临时变量，求字符串长度
//int str_len(char* arr)
//{
//	if (*arr != 0)
//	{
//		return 1 + str_len(arr+1);
//	}
//	else
//	{
//		return 0;
//	}
//	
//
//}
//int main()
//{
//	char arr[] = "hello world!";
//	int n;
//	n = str_len(arr);
//	printf("%d\n", n);
//
//	return 0;
//}
//求n的阶乘
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//
//	
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	
//	printf("%d\n",fac(n));
//}