#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	int a ;//错误的代码，多思考
//	a = a < 100 && a >= 1;
//	scanf("%d\n", a);
//	if ( a % 2 == 1)
//		printf("haha\n");
//	else
//		printf("hehe\n");
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	int i = 0;//无线打印5
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:第一步
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2://第二步
//		printf("third");
//	}
//	return 0;
//}

//int main()//3的倍数
//{
//	for (int a = 3; a < 100; a += 3)
//		printf("%d\n", a);
//	return 0;
//}

//int main()//群友发的，我自己理解了一下
//{//还行没有问题，就是做题时候思路老是跳不出来
//	int i, j;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j >= i)
//			printf("%d\t", i);
//	}
//	return 0;
//}

//int main()//闰年4年一闰
//{
//	for (int a = 1000 ; a < 2001 ; a += 4)
//		printf("%d\t", a);
//	return 0;
//}

//int SDF (int x, int y)
//{
//	//判断x/y余数是否为0
//	int z = x % y;
//
//	//直到余数为0，则跳出循环
//	while (z)
//	{
//		//循环过程中，将除数给x，余数给y，求新的余数z
//		x = y;
//		y = z;
//		z = x % y;
//	}
//	//除数y为最大公约数
//	return y;
//}
//int main()
//{
//	int a = 92;
//	int b = 61;
//	int max = SDF (a, b);
//	printf("%d  %d的最大公约数为 %d\n", a, b, max);
//	return 0;
//}

//int main()
//{//乘法表
//	int a = 1;
//	int b = 1;
//	for (a = 1; a <= 9; a++)
//	{
//		if (a == b)//三角框架
//			printf("\n");
//		for (b = 1; b <= a ; b++)
//			printf("%d * %d = %2d\t", a, b, a*b);
//	}
//
//	return 0;
//}

//int main()//有点麻烦但能解决问题，三数排列大小
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, & b, &c);
//	sdf(a, b, c);
//	return 0;
//}
//int sdf(int x, int y, int z)
//{
//	if (x < y)
//	{
//		if (y < z)
//		{
//			printf("%d>%d>%d", z, y, x);
//		}
//		else
//		{
//			printf("%d>%d>%d", y, z, x);
//		}
//	}
//	else if (y < x)
//	{
//		if (x < z)
//		{
//			printf("%d>%d>%d", z, x, y);
//		}
//		else
//		{
//			printf("%d>%d>%d", x, z, y);
//		}
//	}
//}

//#include <stdio.h>
//int main()//三叔排列，思路跳转
//{
//
//	int a, b, c, t;
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b) { t = a; a = b; b = t; }//如果a < b，则交换a和b的值
//	if(a < c) { t = a; a = c; c = t; }//如果a<c，则交换a和c的值
//	if (b<c){ t = b; b = c;c = t; }//如果b<c，则交换b和c的值
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

