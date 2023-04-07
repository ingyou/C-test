#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(const char* str)
{

}
int main()
{
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}