//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//    int a = 0 ;
//    int b = 2;
//    int c = 2;
//    scanf("%d", &a);
//    if (a < 12)//如果满足a<12
//    {
//        printf("%d\n", b);//打印b
//    }
//    else if (a >12)//如果满足a>12
//        printf("%d\n", 4 * (a / 12) + c);//打印4 * (a / 12) + c的结果
//        return 0;
//}//if else常跟循环语句一起使用。
//
//
//#include<stdio.h>
//int main()
//{
//    int a = printf("Hello world!");
//    printf("\n");//输出printf(“Hello world!”)的返回值
//    printf("%d", a);
//    return 0;
//}

//#include<stdio.h>
//int main() 
//{
//    char a;//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。
//    while ((a = getchar()) != EOF) {
//        getchar();
//        if (a >= 'A' && a <= 'z') 
//        {
//            printf("YES\n");
//        }
//        else {
//            printf("NO\n");
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//strlen是函数
//	//strlen计算的是数组中字符串的具体长度，遇到空字符\0为止，
//	//如果数组中没有写入\0，则一直到遇到\0为止（这种时候输出为不固定随机值）
//	// stelen只计算字符串长度
//	// sizeof是运算符
//	//sizeof计算的是声明后数组的字节大小，包含‘\0’。
//	//sizeof不局限于计算数组
//
//	
//	char arr[] = { 1,2,3,4,5,6,7,8,9 ,};
//	char brr[] = { 1,2,3,4,5,6,7,8,9 ,10,'\0'};
//	int a = { 1 };
//	printf("%d\n", strlen (arr));//58，随机值
//	printf("%d\n", sizeof(arr));//9
//	printf("%d\n", strlen(brr));//10
//	printf("%d\n", sizeof(brr));//11
//	printf("%d\n", a);//1
//	return 0;
//}
//extern ADD(int x, int y);
//  int main() 
//{
//	  int a = 10;
//	  int b = 20;
//	  int sum = 0;
//	  sum = ADD(a, b);
//	printf("%d\n",sum );
//	return 0;
//}
