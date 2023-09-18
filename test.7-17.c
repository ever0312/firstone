#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d\n", &a, &b);//除法及取餘數
//    int c = a / b;
//    int d = a % b;
//    printf("%d %d\n", c, d);
//    return 0;
//}



//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    //利用求余获取a的最后一位，以此类推
//    printf("%d", a % 10);
//    a /= 10;
//    printf("%d", a % 10);
//    a /= 10;
//    printf("%d", a % 10);
//    a /= 10;
//    printf("%d\n", a);
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    int b = 0;
//    while (scanf("%d %d", &a, &b) != EOF)
//    //while是循環函數，不加循環函數無法運行
//    {
//
//        if (a == b)
//        {
//            printf("%d=%d\n", a, b);
//        }
//        else if (a > b)
//        {
//            printf("%d>%d\n", a, b);
//        }
//        else
//        {
//            printf("%d<%d\n", a, b);
//        }
//    }
//
//    return 0;
//}

//int main() {
//    int h, m, s;
//    scanf("%d", &s);
//    h = s / 3600;//计算小时
//    m = s / 60 %60 ;//计算分(取模就是去掉转换成小时的分钟数）
//    s = s % 60;//计算秒数
//    printf("%d %d %d", h, m, s);
//    return 0;
//}

//int main() {
//    int a, b, c;
//    scanf("%d", &c);
//    a = c / 3600;
//    b = c / 60 % 60;
//    c = c % 60;
//    printf("%d %d %d", a, b, c);
//    return 0;
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




