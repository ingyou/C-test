#define _CRT_SECURE_NO_WARNINGS 1
//指针语法学习
//一、指针概念：指针是内存中最小单元的编号，也就是地址。口语中，指针是一个特殊的变量，它里面存储数值，所以指针就是地址。
//重点：指针的类型、指针所指向的类型、指针的值（叫指针所指向的内存区）、指针本身所占据的内存区。
//取地址运算符：&   指针运算符：*

//#include<stdio.h>
//int main()
//{
//	int a = 7;          //指针的声明：数据类型*指针名。如：int* p（p是指针变量）。
//	int* p = &a;	    //此处的意思是：p是指针变量，并且p = &a，也就是说p值就是a的地址。所以*p = a。
//	printf("%d\n", p);  //打印：454031332
//	printf("%d", *p);   //打印：7
//	return 0;
//}

#include<stdio.h>
int main()
{
	int* pa = NULL;        //NULL 是空指针类型。
	char* pb = NULL;
	double* pc = NULL;
	float* pd = NULL;

	printf("%zu\n", sizeof(pa));  //8    //sizeof返回类型是无符号类型unsigned
	printf("%zu\n", sizeof(pb));  //8
	printf("%zu\n", sizeof(pc));  //8
	printf("%zu\n", sizeof(pd));  //8    64位
	return 0;                     //指针的大小：在32位是4个字节，在64位中是8个字节。
}

//二、指针的类型及意义

//#include<stdio.h>
//int main()
//{
//	int* ptr;          //int* 类型
//	char* ptr;         //char*类型
//	int** ptr;         //int**类型
//	int(*ptr)[3];	   //int(*)[3]类型
//	int* (*ptr)[4];	   //int*(*)[4]类型
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344; //0x十六进制，此处的0x11223344刚好占用4个字节。
//	printf("%d\n", &a);
//	int* pa = &a;
//	*pa = 0;  //将a地址中的值替换成0；
//	printf("%d\n", &pa);
//
//	char* pc = (char*)&a;  //强制类型转化
//	*pc = 0;
//	printf("%d", &pc);
//}
//
