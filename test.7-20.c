#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	int a ;//����Ĵ��룬��˼��
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
//	int i = 0;//���ߴ�ӡ5
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
//	case 1:��һ��
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2://�ڶ���
//		printf("third");
//	}
//	return 0;
//}

//int main()//3�ı���
//{
//	for (int a = 3; a < 100; a += 3)
//		printf("%d\n", a);
//	return 0;
//}

//int main()//Ⱥ�ѷ��ģ����Լ������һ��
//{//����û�����⣬��������ʱ��˼·������������
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

//int main()//����4��һ��
//{
//	for (int a = 1000 ; a < 2001 ; a += 4)
//		printf("%d\t", a);
//	return 0;
//}

//int SDF (int x, int y)
//{
//	//�ж�x/y�����Ƿ�Ϊ0
//	int z = x % y;
//
//	//ֱ������Ϊ0��������ѭ��
//	while (z)
//	{
//		//ѭ�������У���������x��������y�����µ�����z
//		x = y;
//		y = z;
//		z = x % y;
//	}
//	//����yΪ���Լ��
//	return y;
//}
//int main()
//{
//	int a = 92;
//	int b = 61;
//	int max = SDF (a, b);
//	printf("%d  %d�����Լ��Ϊ %d\n", a, b, max);
//	return 0;
//}

//int main()
//{//�˷���
//	int a = 1;
//	int b = 1;
//	for (a = 1; a <= 9; a++)
//	{
//		if (a == b)//���ǿ��
//			printf("\n");
//		for (b = 1; b <= a ; b++)
//			printf("%d * %d = %2d\t", a, b, a*b);
//	}
//
//	return 0;
//}

//int main()//�е��鷳���ܽ�����⣬�������д�С
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
//int main()//�������У�˼·��ת
//{
//
//	int a, b, c, t;
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b) { t = a; a = b; b = t; }//���a < b���򽻻�a��b��ֵ
//	if(a < c) { t = a; a = c; c = t; }//���a<c���򽻻�a��c��ֵ
//	if (b<c){ t = b; b = c;c = t; }//���b<c���򽻻�b��c��ֵ
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

