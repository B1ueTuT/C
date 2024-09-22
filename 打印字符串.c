#include <stdio.h>
int main()
{
	char arr1[] = ("wonderful");
        char arr2[] = { 's','w','e','e','t'};
	char arr3[] = { 'n','i','c','e','\0'};
//arr2和arr3分别打印来体现\0的重要性
//用双引号时自动添加\0而不显示
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	return 0;
}
