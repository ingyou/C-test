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

#include<stdio.h>
int main()
{
	int* pa = NULL;        //NULL �ǿ�ָ�����͡�
	char* pb = NULL;
	double* pc = NULL;
	float* pd = NULL;

	printf("%zu\n", sizeof(pa));  //8    //sizeof�����������޷�������unsigned
	printf("%zu\n", sizeof(pb));  //8
	printf("%zu\n", sizeof(pc));  //8
	printf("%zu\n", sizeof(pd));  //8    64λ
	return 0;                     //ָ��Ĵ�С����32λ��4���ֽڣ���64λ����8���ֽڡ�
}

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
//	printf("%d", &pc);
//}
//
