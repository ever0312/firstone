#define _CRT_SECURE_NO_WARNINGS 

//#include <stdio.h>//头文件
//
//int main()//主函数
//{
//	printf("I lost my tellphone/n" );//打印字符及要打印的东西
//	return 0;//返回符
//}
//#include <stdio.h>
//
//int main()
//{
//	printf("Name    Age    Gender\n");
//
//	printf("---------------------\n");
//
//	printf("Jack    18     man\n");
//	return 0;
//}

//#include <stdio.h>求平均数
//int main()
//{
//	int a, b, c, d, e, sum;
//	float average;
//	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//	sum = a + b + c + d + e;
//	average = (float)sum / 5;
//	//printf("%d\n", sum);
//	printf("%.1f\n", average);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("hello c语言\n");//入坑第一个代码
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//	printf("%d\n",sizeof (int));//计算数据类型的字节长度
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 10;//原来的赋值
//	n = 20;//更改的赋值
//
//	printf("%d\n",n);//变量，输出即为20
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 22;//这里输入什么输出就是什么
//	printf("%d\n",age);//字面常量
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int const n = 20;
//	 n = 10;
//	printf("%d\n",n);//还有问题等下改
//	return 0;
//}

//#define  MAX = 30;
//int main()
//{
//	
//	printf("%d\n", MAX);//还有问题等下改
//	return 0;
//}

//#include<stdio.h>
//int MAX(int x, int y)
//{
//	if (x > y)
//	      return x;
//	
//	else 
//		return y;
//
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int kl =  (-8+22)*a-10+c/2;
//	printf("%d",kl);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (scanf("%d\n", &a) != EOF);
//	{
//		if (a >140)
//		printf("Genius");
//     }
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (~scanf("%d", &a))
//	{
//	
//		if (a >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a % 5 == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}