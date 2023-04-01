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

//#include<stdio.h>
//int main()
//{
//	int* pa = NULL;        //NULL 是空指针类型。
//	char* pb = NULL;
//	double* pc = NULL;
//	float* pd = NULL;
//
//	printf("%zu\n", sizeof(pa));  //8    //sizeof返回类型是无符号类型unsigned
//	printf("%zu\n", sizeof(pb));  //8
//	printf("%zu\n", sizeof(pc));  //8
//	printf("%zu\n", sizeof(pd));  //8    64位
//	return 0;                     //指针的大小：在32位是4个字节，在64位中是8个字节。
//}

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
//	printf("%d", &pc);//';
//}

//指针减去指针得到是指针和指针之间元素的个数。
//不是所有的指针都能相减，指向同一块空间的两个指针才能相减。

//#include<string.h>
//int main()
//{
//	int len = strlen("abcdef");  //字符串以 "\0" 结束；
//	printf("%d", len);   //输出6；
//	return 0;
//}

//用函数实现上述操作，如下：
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//
//}

//用指针减去指针：

//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str; //第一个字符的地址；
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);  //最后一个字符的地址减去第一个的地址；
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//}
//注意：函数传参的实质是：传过去的是参数的地址。
//指针的解引用：解引用 "*"的作用是引用指针指向的变量值，引用其实就是引用该变量的地址。
//"解"就是把该地址对应的东西解开，解出来，就像打开一个包裹一样，那就是该变量的值了，所以称为"解引用"。
//int* p = &a;     //定义一个整型指针p，并且p指向了a的地址
//*p = 10;         //解引用，即给a赋值10；  类似于给指针所指向的空间重新赋值。

//指针和数组:
//数组：一组相同元素的集合。
//数组是可以通过指针来访问的。

//#include<stdio.h>
//int main()
//{
//	int arr[7] = { 0 };
//	int* p = arr;  //此时可以通过指针来访问数组，二者可以这样来建立联系；
//	int len = sizeof(arr) / sizeof(arr[0]); //求数组长度；
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//二级指针：
//#include<stdio.h>
//int main()
//{
//	int a = 7;
//	int* pa = &a;
//	*pa = 17;
//	printf("%d\n", a); //一级指针
//
//	int** paa = &pa;   //二级指针
//	**paa = 20;        //二级指针两次解引用，才能找到最开始的a这个空间；
//	printf("%d", a);   //对于int** paa的理解：int*是指paa指向的对象是int*类型的，并且第二个*是说明paa是一个指针变量；
//	return 0;          //二级指针是用来存放一级指针变量的地址；
//}

//指针数组：存放指针的数组就是指针数组
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 7;
//	int* arr[10] = {&a,&b};  //此为指针数组  也就是说，指针也可以放在数组之中
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));  //打印指针数组
//	}
//	return 0;
//}

//用指针数组模拟二维数组：
#include<stdio.h>
int main()
{
	int arr1[3] = { 1,2,3 };
	int arr2[3] = { 2,3,4 };
	int arr3[3] = { 3,4,5 };
	int* pa[3] = { arr1,arr2,arr3 };
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ",pa[i][j]);
		}
		printf("\n");
	}
	return 0;
}
