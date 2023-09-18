#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


//int haokun(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return haokun(n - 1) + haokun(n - 2);
//	}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c = haokun(a);
//	printf("%d\n", c);
//	return 0;
//}

//int SDF(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	c= a + b;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int Q = SDF(n);
//	printf("%d\n", Q);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int b = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%d", &n);//n个数的和
//	for (b = 0; b < n; b++)
//	{
//		scanf("%d", &i);
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int  main()
//{
//	long long n = 0;
//	long long b = 0;
//	long long sum = 0;
//	scanf("%lld", &n);//求和符号
//	for (b = 1; b <= n; b++)
//	{
//		sum += b;
//	}
//	printf("%lld\n", sum);
//	return 0;
//}


//int haokun(char* kun)
//{
//	if (*kun != '\0')
//		return 1 + haokun(kun + 1);
//	else
//		return 0;
//}
//
//
////strlen 递归
//
//int main()
//{
//	char arr[] = "ertyui"; 
//    
//	return 0;
//}

//int fang(int n)
//{
//	int i = 0;
//	int k = 0;
//	int Q = 0;
//	scanf("%d", &k);
//
//	for (i = 0; i < k; i++)
//		Q *= n;
//	return Q;//有空记得改
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fang(n);
//	int r = fang(n);
//	printf("%d\n", r);
//	return 0;
//}