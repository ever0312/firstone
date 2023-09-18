#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


//int main()
//{
//	int a = 0;
//	int p = 0;
//	for (int i = 2001; i < 2101; i++)
//	{
//		if(i %4==0&&i%100 != 0 || i %400 ==0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int main()
{
	int score[5] = { 0 };
	int i = 0;
	for(i=0;i<5;i++)
	{ 
		scanf("%d", &i);
		score[i] = i;
	}
	int y = 0;
	scanf("%d", &y);
	for (i = 0; i < 5; i++)
	{
		if (score[i] == y)
		{printf("success\n");
		break;
	     }
		else
		{
			if (i == 4)
			{
				printf("fail");
				break;
			}
			continue;
		}
	}

}








//#define SQR(X)  X*X
//int main()
//{  
//	int a = 16;
//	int k = 2;
//	int m = 1;
//	/*if (a == k + m)
//		printf("+++");
//	else
//		printf("+++///");*/
//	a  /=  SQR(k+m) / SQR(k+m);
//	//宏在计算的时候没有带括号
// 
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
	/*int a[] = { 10,3,(4,5),6 };*/
	//for (int i = 0; i < 10; i++)
	//	printf("%d", a[i]);
	/*printf("%d", sizeof(a));*/

//	return 0;
//}

/*void trast(char* pa, char* pb)
{
	char emp[5] = { 11,12,13,14,15 };
	for (char i = 0; i < 5; i++)
	{*
		char emp = pa[i];
		pa[i] = pb[i];
		pb[i] = emp;
	}
}*///两数组交换
//int main()
//{
//	char a[5] = { 1,2,3,4,5 };
//	char b[5] = { 6,7,8,9,10};
//	printf("交换前，%d%d%d%d%d%d%d%d%d%d", a[0],a[1], a[2], a[3], a[4],b[0], b[1], b[2], b[3], b[4]);
//	trast(a, b);
//	printf("交换前，%d%d%d%d%d%d%d%d%d%d", a[0], a[1], a[2], a[3], a[4], b[0], b[1], b[2], b[3], b[4]);
//	return 0;
//}

//int main()
//{
//    int NM[10][10], n, m, x = 0;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = 0; j < m; ++j)
//        {
//            scanf("%d ", &NM[i][j]);
//            if (NM[i][j] > 0)
//                x += NM[i][j];
//        }
//    }printf("%d\n", x);//二维数组正负数计算正数个数
//    return 0;
//}



//int main()
//{
//	
//	int s, d ;
//	scanf("%d %d", &s, &d);
//	int NM[10][10] = { 0 };
//	for (int i = 0; i < s; i++)
//	{
//		for (int j = 0; j < d; j++)
//		{
//			scanf("%d", &NM[i][j]);
//		}
//	}
//	for (int i = 0; i < d; i++)
//	{
//		for (int j = 0; j < s; j++)
//		{
//				printf("%d ", NM[j][i]);
//			}
//			printf("\n");
//		}
//	return 0;
//}//矩形，换行列






//void paopao(int a[], int sz)
//{
//	/*int sz = sizeof(a) / sizeof(a[0]);*/
//	int emp = 0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j +i < sz ; j++)
//		{
//			if (a[j] > a[j + 1])
//
//			{
//				int emp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = emp;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[5] = { 7,6,4,9,8 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	printf("没冒泡，%d%d%d%d%d", a[0], a[1], a[2], a[3], a[4]);
//	paopao(a, sz);
//	for (int i = 0; i < sz-1; i++)
//	{
//		printf("冒泡了，%d", a[i]);
//	}
//	return 0;
//}

//int ci_fang(int n, int k)
//{
//	if ( k == 0)
//	{
//		return 1;
//	}
//	else if(k == 1){return n; }
//	else
//		return  n*ci_fang(n, k - 1);
//}
//int main()
//{
//	int n, k;
//	n = k = 0;
//	printf("请输入两个数\n");
//	scanf("%d %d", &n, &k);
//	ci_fang(n,k);
//	printf("%d的%d次方为%d", n, k, ci_fang(n, k));
//
//	return 0;
//}
//int he(n)
//{
//	if (n > 10)
//		{he(n / 10);
//		}printf("%d ", n % 10);
//
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数");
//	scanf("%d", &n);
//	he(n);
//	return 0;
//}

//int haokun(char* kun)
//{
//	int count = 0;
//	for (char i = 0;i < kun[i]; i++)
//	{
//		count++; 
//	}
//
//}
////strlen 循环
//
//int main()
//{
//	char arr[] = "ertyfui";
//	int len = haokun(arr);
//	printf("%d", len);
//	return 0;
//}

//int SDF(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		
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
//    int arr[10][10], n, m, x = 0;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = 0; j < m; ++j)
//        {
//            scanf("%d ", &arr[i][j]);
//            if (arr[i][j] > 0)
//            {
//                x += arr[i][j];
//            }
//        }
//    }
//    printf("%d\n", x);
//    return 0;
//}

//int main()
//{
//	
//	char str[] = "xyz", * p = str;
//	while (*p) //访问数组/0时停止。
//		p++;
//	for (p--; p - str >= 0; p--)
//		puts(p);
//}