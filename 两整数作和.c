#define _CRT_SECURE_NO_WARNINGS
//VS编译器认为scanf函数不安全而报错，解决方案1是用VS提供的scanf_S函数
//                                 解决方案2是在源代码的第一行加了#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int sum = num1 + num2;
	printf("%d\n",sum);
		return 0;
}
