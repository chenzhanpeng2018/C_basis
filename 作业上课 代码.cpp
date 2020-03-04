#include <stdio.h>
#include <math.h>
#include <windows.h>

#pragma warning(disable:4996)

//不允许创建临时变量，交换两个数的内容（附加题）
void Swap()
{
	int a = 10;
	int b = 20;
	printf("before: %d, %d\n", a, b);
	a = a ^ b; //
	b = a ^ b; //b = a^b^b -> b = a;
	a = a ^ b; // 0^b
	//int temp = a;
	//a = b;
	//b = temp;
	printf("after: %d, %d\n", a, b);
}
//求10 个整数中最大值。
int Max(int a[])
{
	//printf("%d\n", num);
	/*int i = 0;
	int max = 0;
	for (; i < num; i++){
		if (max < a[i]){
			max = a[i];
		}
	}
	printf("max: %d\n", max);*/
}
//将数组A中的内容和数组B中的内容进行交换
void ArrSwap()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 6, 7, 8, 9, 0 };
	int num = sizeof(a) / sizeof(a[0]);
	int i = 0;
	printf("a[]: ");
	for (; i < num; i++){
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("b[]: ");
	for (i=0; i < num; i++){
		printf("%d ", b[i]);
	}
	printf("\n");


	for (i=0; i < num; i++){
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}


	printf("a[]: ");
	for (i=0; i < num; i++){
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("b[]: ");
	for (i = 0; i < num; i++){
		printf("%d ", b[i]);
	}
	printf("\n");
}
//计算1 / 1( - 1 / 2) + 1 / 3 (- 1 / 4) + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
void Cal()
{
	double res = 0.0;
	int i = 1;
	int flag = 1;
	for (; i <= 100; i++){
		res += (1.0 / i)*flag;
		printf("%f\n", res);
		flag = -flag;
	}
	printf("res: %f\n", res);
}

//编写程序数一下 1到 100 的所有整数中出现多少次数字9。
void CountNine()
{
	int count = 0;
	int i = 1;
	//9,19...89,91, 92,93,94
	for (; i < 100; i++){
		if (i  < 10){
			if (i == 9){
				count++;
			}
		}
		else{
			if (i % 10 == 9){
				count++;
			}
			if (i/10 == 9){
				count++;
			}
		}
	}

	printf("%d\n", count);
}
void Armstrong()
{
	int i = 0;
	for (; i <= 9999; i++){
		int x = i;
		int sum = 0;
		while (x){
			int y = x % 10;
			sum += (int)pow(y, 4);
			x /= 10;
		}
		if (sum == i){
			printf("%d ", i);
		}
		/*int x = i % 10;
		int y = (i / 10) % 10;
		int z = (i / 100);*/
	}
	printf("\n");
}
int main()
{
	int x = 1234;
	int a[10];
	int i = 0;
	while (x){
		printf("%d ", x % 10);
		a[i] = x % 10;
		x /= 10;
		i++;
	}
	printf("\n");

	i = 3;
	while (i >= 0){
		printf("%d ", a[i]);
		i--;
	}

	printf("\n");
	//Armstrong();
	//printf("%d\n", (int)pow(4, 2));
	//CountNine();
//	Cal();
	//Swap();
	//int a[] = { 1, 2, 3, 4, 5 };
	//int num = sizeof(a) / sizeof(a[0]);
	//Max(a);
	system("pause");
	return 0;
}


//
//int Fact(int n) //3
//{
//	if (n <= 1){	//n -> n * (n-1)!
//		return 1;
//	}
//	return n * Fact(n - 1);
//}
//int count = 0;
////1 1 2 3 5 8 13 21 34 ...
//int Fib(int n) //1 
//{
//	count++;
//	if (n <= 2){
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int ret = Fib(400);
//	//for (; i <= 10; i++){
//	//	int result = Fib(i);
//	//	printf("%d ", result);
//	//}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}

