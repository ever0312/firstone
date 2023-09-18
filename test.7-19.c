#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	printf("hello boy!\n");
//	return 0;
//}
//#include<stdio.h>
//int main()

//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("最大值=%d\n", num1);
//	else
//		printf("最大值=%d\n", num2);
//	return 0;
//}
//#include<stdio.h>
////#include<string.h>
//int MAX(int x, int y)
//
//{
//	if (x > y)
//		return  x;
//	else
//return y ;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//		max = MAX(num1, num2);
//	
//	printf("max= %d\n", max); 
//	return 0;
//}
//#include<stdio.h>
//int main()
//
//
//{
	//int ch = 0;
	////ctrl + z
	////EOF-END OF FILE -> -1
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
	//int ch = getchar();//输入
	//putchar(ch);//输出
	//printf("%c\n", ch);
		/*int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;//1234
			//=5满足条件打断，返回上面死循环
			//满足条件终止后面的代码
		printf("%d", i);
		i++;
	}*/
	/*int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;//1234
		printf("%d", i);
		i++;
	}*/
	/*int i = 1;
	while (i <= 10)//1-10
	{
		printf("%d", i);
		i++;
	}*/
	//while (1)//死循环
	//	printf("dashabi\n");
	//int n = 1;
	//int m = 2;
	//switch (n)
	//{
	//case 1:m++;//++是+1的意思
	//case2: n++;
	//case 3:
	//	switch (n)//套入n代数
	//	{//switch可以嵌套使用
	//	case 1:n++;
	//	case 2: m++; n++; break;
	//	}
	//case 4:m++;
	//	break;
	//default:
	//	break;
	//}
	//printf("m = %d,n = %d\n",m , n);
//	int day = 0;
//scanf_s("%d", &day);
//switch (day)
//{
//case 1:	
//case 2:
//case 3:	
//case 4:
//case 5:
//	printf("工作日\n");
//	break;
//case 6:
//case 7:
//	printf("休息日\n");
//	break;//
//case 8:
// break;//最后一句也加break好理解
//default:
//	printf("输入错误\n");
//}
	//int day = 0;
	//scanf_s("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期七\n");
	//	break;
	//}

//int main()
//{
//	int i = 1;
//	i = getchar()!='\n';
//	
//		 while (i <= 10)
//		 {
//			 if (i % 2 == 1)
//				 printf("%d", i);
//			 i++;
//		 }
//		 while (i <= 10)
//		 {
//			 if (i % 2 != 0)
//				 printf("%d", i);
//			 i++;
//		 }
//		 while (i <= 10)
//		 {
//			 printf("%d\n", i);
//			 i += 1;
//		 }
//	 
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int r = 6;//确定值
//	while (a <= 8)//给定条件范围
//
//		if (a <= 5)
//		{
//			//break;//当遇到break时循环终止，这里往下的命令都不执行
//			printf("%d\n", a);
//			a++;//小于等于5就往回加1，直到大于5跳出，转到下一个条件
//		}
//		else
//		{
//
//			continue;//while中出现continue时，a>5后不再自加，陷入死循环
//			//此时运行代码只输出1，2,3,4,5后一直返回表达式部分，不再输出。
//			printf("%d\n", r);//满足a>5，则依次打印
//			a++;//大于5往回加1，直到超出条件范围（a<=8)退出
//		}
//
//	return 0;
//}
//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = ADD(a,b);
//	printf("%d\n",sum);
//	return 0;
//}

//int main()
//{
//	char arr[6] = { '1','2','3' };
//	char gft[10] = { 'a','b','c','d','e'};
//	printf("%s\n", arr);//1 2 3
//	printf("%s\n", gft);//a b c d e
//	printf("%c\n", arr[2]);//3
//	printf("%c\n", gft[1]);//b
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	a >= 1 && a <= 5 ? printf("yes\n") : printf("no\n");
//	
//	a >= 1 && a <= 5 ? printf("yes\n") : printf("no\n");
//	return 0;
//}
//typedef unsigned int sf;
//int main()
//{
//	unsigned int a = 1;
//	sf b = 1;
//	printf("%d\n", a);//1
//	printf("%d\n", b);//1
//	return 0;
//}


//int SDF()
//	{
//		 int i = 0;
//		i++;
//		printf("%d\n", i);
//	}
//	int main()
//	{
//		int j = 0;
//		for (; j < 5; j++)
//		{
//			SDF();
//		}
//		
//	printf("%d", j);//1,1,1,1,1,5
//	return 0;
//}

 /*ADD(int x, int y)
{
	int z = 0;
	z = x + y;
}*/