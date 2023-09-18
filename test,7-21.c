#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = 0;
//	int c = 1;
//	for (b = 1; b <= a; b++)
//	{
//		c = c * a;
//	}
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	float sum = 0;
//	for (a = 1; a >= 1 && a <= 100; a++)
//	{
//		if (a % 2 == 1)
//			sum += 1.0 / a;
//		else if (a % 2 == 0)
//			sum += 1.0 / (-a);
//	}
//	printf("%d\n", a);
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int sum = 0;
//	for (a = 1; a >= 1 && a <= 100; a++)
//		if (a >= 10 && a <= 100)
//		{
//			if (a % 10&&a/10  == 9)
//				sum ++;
//		}
//		 else if (a >= 1 && a <= 10)
//		{
//			if (a % 5 == 4)
//				sum ++;
//		}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 1,6,8,4,5 };
//	int left = 0;
//	int right = 4;
//	int k = 6;//设定一个你要找的值
//	while (left <= right) {//当右边大于等于左边跳出循环
//		int mid = (left + right) / 2;
//		if (k > arr[mid]) {//如果你设定的值大于arr[mid]，则在可能k在右半侧
//			left = mid + 1;
//		}
//		else if (k < arr[mid]) {//如果你设定的值小于arr[mid]，则在可能k在左半侧
//			right = mid - 1;
//		}
//		else {//如果你设定的值等于arr[mid]，则在下标找到
//			printf("找到了下标是%d:", mid);
//			break;
//		}
//
//	}
//	if (left > right) {
//		printf("找不到");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//int left = 0;
//int right =9;
//int k = 10;
//
//while (left <= right) {
//	int mid = (left + right) / 2;
//	if (k > arr[mid]) {
//		left = mid + 1;
//	}
//	else if (k < arr[mid]) {
//		right = mid - 1;
//	}
//	else {
//		printf("找到了下标是%d:", mid);
//		break;
//	}
//
//}
//if (left > right) {
//	printf("找不到");
//}
//return 0;
//}

//void menu()
//{
//	printf("####################\n");
//	printf("####################\n");
//	printf("####1.play game####\n");
//	printf("######0.go out######\n");
//	printf("####################\n");
//	printf("####################\n");
//}
//
//
//
//
//
//
//int main()
//{
//	menu()
//	
//
//	return 0;
//}






//猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
//3.猜对了，就恭喜你，游戏结束
//4.你猜错了，会告诉你猜大了，还是猜小了，继续猜，直到猜对
//5.游戏可以一直玩，除非退出游戏
//#include<stdio.h>
//#include<stdio.h>
//#include<time.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("*********1.play*******\n");
//	printf("*********0.exit*******\n");
//	printf("**********************\n");
//}
//
//void game()    //猜数字游戏实现
//{
//	//1.生成随机数  rand
//	//rand函数返回了一个0-32767之间的数字 但这个数字不够随机
//	//时间 - 时间戳
//	int ret = rand() % 100 + 1;   //%100的余数是0到99，然后+1
//	/*printf("%d\n", ret);*/
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));     // 随机值设置一次就行了
//	do
//	{
//		menu();//打印菜单
//		printf("请选择：>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);   //当input选择为1的时候 继续循环（继续游戏）
//	return 0;
//}



//#include<stdio.h>
//#include<stdio.h>
//#include<time.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("*********1.play*******\n");
//	printf("*********0.exit*******\n");
//	printf("**********************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}