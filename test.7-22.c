#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//
//	return 0;
//}

//int SDF(int i)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//			return 1;
//}
//int main(void)
//{
//	int a =0;
//	a = SDF(a);
//	printf("%d\t", a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int brr[num] = { 0 };
//	return 0;
//}

//#define ADD(x,y)((x)+(y))

//int main()
//{
//	int sum = 0;
//	sum = ADD(1, 2);
//	printf("%d\n", sum);
//	return 0;
//}

//int* p;//����int
//       //������*p
//
//int* p;//��������int*
//       //ָ����p
//
//int* p;//ָ��ָ������int
//       //ָ����p

//int main()
//{
//	char* p;
//	short* q;
//	int* w;
//	float* e;
//	double* r;
//
//	printf("%d\n", sizeof(p));  // 8
//	printf("%d\n", sizeof(q));  // 8
//	printf("%d\n", sizeof(w));   // 8
//	printf("%d\n", sizeof(e));   // 8
//	printf("%d\n", sizeof(r));   // 8
//	//ָ��洢��ַ���ڴ涼�ǰ˸��ֽ�
//	//64λ����Ϊ8��32λ����Ϊ4������ʱ���16λ����Ϊ2
//	return 0;
//}


//int* p = NULL;
//int* q = (int*)0x0;

//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��ַ
//	p = &a;
//	printf("%d\n", *p);//10
//	printf("%d\n", p);//10
//	return 0;
//}
//struct day
//{
//	unsigned short year;
//	unsigned char mon;
//	unsigned char day;
//};
//int main()
//{
//	char i;
//	struct day today[5] = { {2022,7,23 }, {2021, 7, 23}, {2020, 7, 23}, {2019, 7, 23}, {2018, 7, 23} };
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d-%d-%d\t", today[i].year, today[i].mon, today[i].day);
//	}
//	return 0 ;
//}




//  typedef struct
//{
//	unsigned short year;
//	unsigned char mon;
//	unsigned char day;
//} day;
//int main()
//{
//	day today = { 2022,7,23 };
//	day  *pddtoday;
//	pddtoday = &today;
//
//	printf("%d-%d-%d\n", (*pddtoday).year, (*pddtoday).mon, (*pddtoday).day);
//    printf("%d-%d-%d\t", pddtoday->year, pddtoday->mon, pddtoday->day);
//	
//	return 0;
//}

//void very( unsigned int i)
//{
//	if (i >9)
//	{
// //		very(i / 10);
//		printf("%d ", i % 10);
//	}
//	else
//	{
//   printf("%d ", i);
//	}
//void very( unsigned int i)
//{
//	if (i <10)
//	{
//		printf("%d ", i);
//	}
//	else
//	{
//		very(i / 10);
//		printf("%d ", i % 10);
//	}
//}
//int main()
//{
//	 int num = 0 ;
//	scanf("%d", &num);
//	very(num);
//	return 0;
//}




//int very(int i)
//{
//	int q = 0;
//	int j = 1;
//	for (q = i; q > 0; q--) {
//		j = j * i;
//		i--;
//	}
//	printf("%d\n", j);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	very(n);
//	return 0;
//
//}


//int very(int i)
//{
//	if (i == 1)
//		return 1;
//	else
//		return i * very(i - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	very(n);
//	printf("%d\n", very(n));
//	return 0;
//
//}