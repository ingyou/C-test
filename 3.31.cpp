#define _CRT_SECURE_NO_WARNINGS 1
//ָ���﷨ѧϰ
//һ��ָ����ָ�����ڴ�����С��Ԫ�ı�ţ�Ҳ���ǵ�ַ�������У�ָ����һ������ı�����������洢��ֵ������ָ����ǵ�ַ��
//�ص㣺ָ������͡�ָ����ָ������͡�ָ���ֵ����ָ����ָ����ڴ�������ָ�뱾����ռ�ݵ��ڴ�����
//ȡ��ַ�������&   ָ���������*

//#include<stdio.h>
//int main()
//{
//	int a = 7;          //ָ�����������������*ָ�������磺int* p��p��ָ���������
//	int* p = &a;	    //�˴�����˼�ǣ�p��ָ�����������p = &a��Ҳ����˵pֵ����a�ĵ�ַ������*p = a��
//	printf("%d\n", p);  //��ӡ��454031332
//	printf("%d", *p);   //��ӡ��7
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int* pa = NULL;        //NULL �ǿ�ָ�����͡�
//	char* pb = NULL;
//	double* pc = NULL;
//	float* pd = NULL;
//
//	printf("%zu\n", sizeof(pa));  //8    //sizeof�����������޷�������unsigned
//	printf("%zu\n", sizeof(pb));  //8
//	printf("%zu\n", sizeof(pc));  //8
//	printf("%zu\n", sizeof(pd));  //8    64λ
//	return 0;                     //ָ��Ĵ�С����32λ��4���ֽڣ���64λ����8���ֽڡ�
//}

//����ָ������ͼ�����

//#include<stdio.h>
//int main()
//{
//	int* ptr;          //int* ����
//	char* ptr;         //char*����
//	int** ptr;         //int**����
//	int(*ptr)[3];	   //int(*)[3]����
//	int* (*ptr)[4];	   //int*(*)[4]����
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344; //0xʮ�����ƣ��˴���0x11223344�պ�ռ��4���ֽڡ�
//	printf("%d\n", &a);
//	int* pa = &a;
//	*pa = 0;  //��a��ַ�е�ֵ�滻��0��
//	printf("%d\n", &pa);
//
//	char* pc = (char*)&a;  //ǿ������ת��
//	*pc = 0;
//	printf("%d", &pc);//';
//}

//ָ���ȥָ��õ���ָ���ָ��֮��Ԫ�صĸ�����
//�������е�ָ�붼�������ָ��ͬһ��ռ������ָ����������

//#include<string.h>
//int main()
//{
//	int len = strlen("abcdef");  //�ַ����� "\0" ������
//	printf("%d", len);   //���6��
//	return 0;
//}

//�ú���ʵ���������������£�
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

//��ָ���ȥָ�룺

//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str; //��һ���ַ��ĵ�ַ��
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);  //���һ���ַ��ĵ�ַ��ȥ��һ���ĵ�ַ��
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//}
//ע�⣺�������ε�ʵ���ǣ�����ȥ���ǲ����ĵ�ַ��
//ָ��Ľ����ã������� "*"������������ָ��ָ��ı���ֵ��������ʵ�������øñ����ĵ�ַ��
//"��"���ǰѸõ�ַ��Ӧ�Ķ����⿪��������������һ������һ�����Ǿ��Ǹñ�����ֵ�ˣ����Գ�Ϊ"������"��
//int* p = &a;     //����һ������ָ��p������pָ����a�ĵ�ַ
//*p = 10;         //�����ã�����a��ֵ10��  �����ڸ�ָ����ָ��Ŀռ����¸�ֵ��

//ָ�������:
//���飺һ����ͬԪ�صļ��ϡ�
//�����ǿ���ͨ��ָ�������ʵġ�

//#include<stdio.h>
//int main()
//{
//	int arr[7] = { 0 };
//	int* p = arr;  //��ʱ����ͨ��ָ�����������飬���߿���������������ϵ��
//	int len = sizeof(arr) / sizeof(arr[0]); //�����鳤�ȣ�
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//����ָ�룺
//#include<stdio.h>
//int main()
//{
//	int a = 7;
//	int* pa = &a;
//	*pa = 17;
//	printf("%d\n", a); //һ��ָ��
//
//	int** paa = &pa;   //����ָ��
//	**paa = 20;        //����ָ�����ν����ã������ҵ��ʼ��a����ռ䣻
//	printf("%d", a);   //����int** paa����⣺int*��ָpaaָ��Ķ�����int*���͵ģ����ҵڶ���*��˵��paa��һ��ָ�������
//	return 0;          //����ָ�����������һ��ָ������ĵ�ַ��
//}

//ָ�����飺���ָ����������ָ������
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 7;
//	int* arr[10] = {&a,&b};  //��Ϊָ������  Ҳ����˵��ָ��Ҳ���Է�������֮��
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));  //��ӡָ������
//	}
//	return 0;
//}

//��ָ������ģ���ά���飺
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
