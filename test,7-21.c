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
//	int k = 6;//�趨һ����Ҫ�ҵ�ֵ
//	while (left <= right) {//���ұߴ��ڵ����������ѭ��
//		int mid = (left + right) / 2;
//		if (k > arr[mid]) {//������趨��ֵ����arr[mid]�����ڿ���k���Ұ��
//			left = mid + 1;
//		}
//		else if (k < arr[mid]) {//������趨��ֵС��arr[mid]�����ڿ���k������
//			right = mid - 1;
//		}
//		else {//������趨��ֵ����arr[mid]�������±��ҵ�
//			printf("�ҵ����±���%d:", mid);
//			break;
//		}
//
//	}
//	if (left > right) {
//		printf("�Ҳ���");
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
//		printf("�ҵ����±���%d:", mid);
//		break;
//	}
//
//}
//if (left > right) {
//	printf("�Ҳ���");
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






//��������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
//3.�¶��ˣ��͹�ϲ�㣬��Ϸ����
//4.��´��ˣ��������´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
//5.��Ϸ����һֱ�棬�����˳���Ϸ
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
//void game()    //��������Ϸʵ��
//{
//	//1.���������  rand
//	//rand����������һ��0-32767֮������� ��������ֲ������
//	//ʱ�� - ʱ���
//	int ret = rand() % 100 + 1;   //%100��������0��99��Ȼ��+1
//	/*printf("%d\n", ret);*/
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������\n");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));     // ���ֵ����һ�ξ�����
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);   //��inputѡ��Ϊ1��ʱ�� ����ѭ����������Ϸ��
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
//		printf("�������\n");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}