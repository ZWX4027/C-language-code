#include<stdio.h>
#include<string.h>
#include<assert.h>
#include <ctype.h>

/*��������
void Revers(int *arr, int len)
{
	int tmp;
	for (int i = 0; i < len / 2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = tmp;
	}
}
int main()
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = 10;

	for (int i = 0; i < n; i++)
	{
		arr[i];
	}
	Revers(arr, sizeof(arr) / sizeof(arr[0]));
	printf("%d\n", sizeof(arr));
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
	return 0;
}
*/
//쳲���������:1 1 2 3 5 8 13 21 34.... 
//void Fibonacci(int arr[], int arrsize)  //����
//{
//	assert(arrsize >= 2);
//	if (arrsize < 0)
//	{
//		return ;
//	}
//	arr[0] = 1;
//	arr[1] = 1;
//	for (int i = 2; i < arrsize; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//}
//int main()
//{
//	int arr[10];
//	Fibonacci(arr, sizeof(arr) / sizeof(arr[0]));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int Fibonacci(int n)    //ѭ��
//{
//	int i;
//	int a1 = 1;
//	int a2 = 1;
//	int a3 = 1;
//	for (i = 2; i<n; i++)
//	{
//		a3 = a1 + a2;
//		a1 = a2;
//		a2 = a3;
//	}
//	return a3;
//}
//int main()
//{
//	for (int i = 1; i<7; i++)
//	{
//		printf("%3d", Fibonacci(i));
//	}
//	printf("\n");
//	return 0;
//}
/*int Fibonacci(int n)  //�ݹ�
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}
int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	count = Fibonacci(n);
	printf("ret=%d", count);
	return 0;
}*/
//ֵ������ַ����
//void Swap1(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void Swap2(int *p1, int *p2)
//{
//	int *tmp = p1;
//	p1 = p2;
//	p2 = tmp;
//}
//void Swap3(int *p1, int *p2)
//{
//	int * tmp;
//	*tmp = *p1;
//	*p1 = *p2;
//	*p2 = *tmp;
//}
//void Swap4(int *p1, int *p2)
//{
//	int tmp;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void Fun(int *p)
//{
//	p = NULL;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	/*Swap1(a, b);
//	printf("%d %d\n", a, b);*/
//	/*Swap2(&a, &b);
//	printf("%d %d\n", a, b);*/
//	/*Swap3(&a, &b);
//	printf("%d %d\n", a, b);*/
//	/*Swap4(&a, &b);
//	printf("%d %d\n", a, b);*/
//	int *p = &a;
//	Fun(p);
//	printf("%d\n", *p);
//	return 0;
//}
//�ַ����ĸ��ơ�������
//void Mystrcpy(char *des, char *src)
//{
//	int i;
//	for (i = 0; src[i] != '\0'; i++)
//	{
//		des[i] = src[i];
//	}
//	des[i] = '\0';//����\0���ʾ����arr�ж೤�������Խ�������
//}
//int main()
//{
//	char arr[] = "hellojfksd";
//	char brr[] = "world";
//	Mystrcpy(arr, brr);
//	printf("%s\n", arr);
//	return 0;
//}
//�ַ����ĸ��ơ���ָ��
//void Mystrcpy(char *des, const char *src)
//{
//	//1��
//	/*while(*src!='\0')
//	{
//		*des = *src;
//		des++;
//		src++;
//	}*/
//	//2��
//	while (*src != '\0')
//	{
//		*des++ = *src++;
//	}
//	//3��
//	//while (*des++ = *src++)
//	
//	*des = '\0';
//}
//
//int main()
//{
//	char str1[] = "abcdefg";//����д��char *str1 = "abcdefg";��Ϊָ�벻���Լ��Ŀռ䣬��ָ���ַ������ģ����ܱ��޸�
//	char *str2 = "hello";
//	Mystrcpy(str1, str2);
//	//4��strcpy(str1, str2);
//	printf("%s\n", str1);
//	//5��
//	//printf("%s\n", strcpy(str1, str2));//֧����ʽ���
//	return 0;
//}
/*int Mystrlen(const char *str)
{
	assert(*str != NULL);
	int count=0;
	while( *str != '\0')
	{
		count++;
		str++;	
	}
	return count;
}
int main()
{
char *arr="abcde";
printf("%d\n", Mystrlen(arr));
return 0;
}*/
//�ַ���������
//char *Mystrcat(char *str1,char*str2)
//{
//	char *begin = str1;
//	while( *str1!='\0' )
//	{
//		str1++;
//	}
//	while (*str2 != '\0')
//	{
//		*str1++= *str2++;
//	}
//	*str1 = '\0';
//	return begin;
//}
//int main()
//{
//	char str1[20] = "abcde";
//	char *str2 = "hello";
//	Mystrcat(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}
//�ַ����ıȽ�
//int Mystrcmp(const char *str1, const char*str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char *str1 = "abcdef";
//	char *str2 = "abce";
//	printf("%d\n", Mystrcmp(str1, str2));
//	return 0;
//}

//char *Myitoa(char *str, int num)//1234->"1234"
//{
//	int i = 0;
//	while (num != 0)
//	{
//		str[i] = num % 10 + 48;//48�ǡ�\0����ASCII��ֵ
//		i++;
//		num /= 10;
//	}
//	str[i] = '\0';
//	//��ʱstr�������������
//	i--;//--�����������±�
//	char tmp = 0;
//	for (int j = 0; j < i; i--, j++)
//	{
//		tmp = str[i];
//		str[i] = str[j];
//		str[j] = tmp;
//	}
//	return str;
//}
//int main()
//{
//	char src[100];
//	int a = 1234;
//	Myitoa(src, a);
//	printf("%s\n", src);
//	return 0;
//}
//int Myatoi(const char *str)//"1234"->1234,"a123"->0,"12a34"->12
//{
//	int flg = 1;
//	int tmp = 0;
//	assert( str != NULL);//�п�
//	while (*str == ' ')
//	{
//		str++;
//	}
//	if (*str == '-')
//	{
//		flg = -1;
//		str++;
//	}
//	else if (*str == '+')
//	{
//		flg = 1;
//		str++;
//	}
//	while (isdigit(*str))
//	{
//		tmp = tmp * 10 + *str - '0';
//		str++;
//	}
//	return flg *tmp;
//}
//int main()
//{
//	char str1[100] = "12a 34";
//	char str2[100] = "a1223";
//	char str3[100] = "-123";
//	printf("%d\n", Myatoi(str1));
//	printf("%d\n", Myatoi(str2));
//	printf("%d\n", Myatoi(str3));
//	return 0;
//}
//strcpyԽ������
//int main()
//{
//	char str1[10];
//	char str2[] = "asdfghjksghjhj";
//	errno_t et = strcpy_s(str1,str2);
//	//printf("%s\n", str1);
//	printf("%d\n", et);
//	return 0;
//}
//����Ӣ�ĵ��ʵĸ���
//1����򵥵���ʽad fad adf��
//ǰһ���ǿո񣬺�һ�����ǿո����ʾ����һ��Ӣ�ĵ�������һ��
//int WordNum(const char *str)
//{
//	int flg = 0;//��0��ʾ�ո�1��ʾ��ĸ
//	int count = 0;
//	while (*str!= '\0')
//	{
//		if (*str == ' ')
//		{
//			flg = 0;
//		}
//		if (*str != ' '&&flg == 0)
//		{
//			count++;
//			flg = 1;
//		}
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char *str[100] = { "ad fad adf +_-" };
//	printf("%d\n", WordNum(*str));
//	return 0;
//}
//int WordNum(const char *str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		if (isalpha(*str) && !isalpha(*(str + 1)))
//			//��#include <ctype.h>
//		{
//			count++;
//		}
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char *str[100] = { "ad fad   adf 234 +_" };
//	printf("%d\n", WordNum(*str));
//	return 0;
//}
//error
//int main()
//{
//	int arr[4][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int brr[3][4];
//	/*for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			printf(" %d  ", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			brr[j][i] = arr[i][j];
//			printf(" %d  ", brr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//�õݹ��󣺵�һ����10�꣬ÿ���˱���һ���˴�����
//int Age(int n)
//{
//	int tmp;
//	if (n == 1)
//	{
//		return 10;
//	}
//	tmp = Age(n - 1) + 2;
//	return tmp;
//}
//int main()
//{
//
//	printf("%d\n", Age(2));
//	return 0;
//}
//�ݹ飬n!=n*(n-1)
//int Fac(int n)
//{
//	if (n == 0 || n == 1)
//	{
//		return 1;
//	}
//	return n*Fac(n - 1);
//}
//int main()
//{
//	printf("%d\n", Fac(4));
//	return 0;
//}
//쳲���������----�ݹ飨Ч����������ʹ�ã�
//int Fabio(int n)
//{
//	if (n == 0 || n == 1)
//	{
//		return 1;
//	}
//	return Fabio(n - 1) + Fabio(n - 2);
//}
//int main()
//{
//	int n = 6;
//	for (int i = 0; i < n; i++)
//	{
//		printf("%3d", Fabio(i));
//	}
//	printf("\n");
//	return 0;
//}
//ѭ����쳲���������
//int Fabio(int n)
//{
//	int f1 = 1;
//	int f2 = 1;
//	int f3;
//	for (int i = 2; i <= n; i++)
//	{
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//	}
//	return f3;
//}
//int main()
//{
//	printf("%d\n", Fabio(4));
//	return 0;
//}
//������쳲���������
//void Fabio(int arr[],int arrsize)
//{
//	assert(arrsize >= 2);
//	if (arrsize < 0)
//	{
//		return ;
//	}
//	arr[0] = 1;
//	arr[1] = 1;
//	for (int i = 2; i < arrsize; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//}
//int main()
//{
//	int arr[5];
//	Fabio(arr, sizeof(arr) / sizeof(arr[0]));
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//��ŵ��������ĵݹ飩
//��A��B��C�������ӣ�ÿ��ֻ���ƶ�һ�����ӣ��ƶ����������ϱ����Ǵ�������С�����ϣ����հ�A���ϵĽ���ȫ���Ƶ�C����   
//int count = 0;
//void Move(char a, char b)
//{
//	count++;
//	printf("%c->%c\n", a, b);
//}
//void Hanio(int n, char a, char b, char c)
//{
//	
//	if (n == 1)
//	{
//		
//		Move(a, c);
//	}
//	else
//	{
//		Hanio(n - 1, a,c,b);
//		Move(a, c);
//		Hanio(n - 1, b, a, c);
//	}
//}
//int main()
//{
//	Hanio(4, 'A', 'B', 'C');
//	printf("%d\n", count);
//	return 0;
//}
/*
//typedef�����ض���
typedef unsigned long long uint64;//����һ����һ���������������
//��������uint64����ָ�ľ���unsigned long long
typedef int* Pink;//int*�ȼ���Pink

//typedef struct Student Student;//�������٣���һ����õڶ�����ʽ
////��ʽ��
//typedef struct Student
//{
//}Student;

typedef int Arr[10];//�������������������ͣ�������ı������������������
typedef int(*Pfun)(int,int);//û��typedefʱ��int(*Pfun)()����ָ�������ָ��û���βΣ�����ֵ��һ�����͵ĺ���
//����typedef���ͱ���������������ˣ�
int Max(int a, int b)
{
	return a > b ? a : b;
}

#define PINK int*
struct bir
{
	int day;
	int month;
	int year;
};
struct Student
{
	char name[20];
	int age;
	int sex;
	struct bir bbi;//����ʹ���ڴ˽ṹ��֮ǰ����Ķ���
	//struct Student a;//error ��ʱ����֪��Student����ṹ���ж�󣬲�֪����η����ڴ�
	struct Student *p;//ok
	
};
//����ʽ
void Show(Student *pstu)
{
	//printf("%s,%d\n", *pstu.name, *pstu.age);//error����˵��߱�������ṹ��/���ϡ���Ϊ.�����ȼ���*�ߣ����Ը�*pstu������
	//printf("%s,%d\n", (*pstu.)name, (*pstu.)age)//��ȷ
	printf("%s,%d\n", pstu->name, pstu->age);
	//�����һ���ṹ�����ͨ�������������ĳ�Աͨ��.�������һ���ṹ���ָ����������ĳ�Աͨ��->
	//printf("%s,%d\n", stu.name, stu.age);
}
int main()
{
	struct Student stu1 = {"liubei",20};
	
	Show(&stu1);

	//struct Student stu2;
	//Student stu3 = { "caocao", 18 };//����٣�c++�ļ��п���ʹ�ã�
	////��c�����лᱨ��StudentΪδ�����ı�ʶ������������ǰ�����struct
	////���������typedef������
	//stu1.age = 38;//��η������� 

	//Arr b;
	//printf("%d\n", sizeof(b));

	//Pfun p;
	//p = Max;

	//Pink e, f;
	//PINK i, j;//�궨��������ַ��滻����ͬ��int*i,j;
	//e = &d;//��ʾ����ָ��
	//f = &d;//��ʾ����ָ��
	//i = &d;//��ʾ����ָ��
	//j = d;//��ʾ���α���
	//typedef int *pink;
	//#define PINK int*; 
	return 0;
}
//����ʽ
void Show(Student stu)
{
	printf("%s,%d\n", stu.name, stu.age);
}
int main()
{
	struct Student stu1 = { "liubei", 20 };

	Show(stu1);
	return 0;
}

typedef struct A
{
	int a;
	int *b;
}A;
typedef struct B
{
	A sa;
	A *sp;
	int c;
	struct B*sd;
};
int main()
{
	B n;
	B *bp = &n;
	n.sa.a;
	n.sa.b;
	n.sp->a;
	n.sp->b;
	n.c;
	n.sd;
	bp->sa.a;
	bp->sa.b;
	bp->sp->a;
	bp->sp->b;
	bp->c;
	bp->sd;
	return 0;
	
}
*/
//typedef struct Student
//{
//	char name[20];
//	int age;
//}Student;
//void Show(Student *p, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%s,%d\n", p[i].name, p[i].age);//[]�Դ������ã�p[i] == *(p+i)
//		printf("%s,%d\n", (p + i)->name, (p + i)->age);
//	}
//}
//int main()
//{
//	Student stu1 = { "liubei", 20 };//��1��
//	Student arr[3] = { { "liubei", 20 }, { "caocao", 30 }, { "sunquan", 18 } };//��2��
//	Show(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//struct A
//{
//	int a;
//}B,C;
//�ļ�����ʧ��
//int main()
//{
//	//�������һ
//	char *path = "D:\\1.txt";//��б�ܺ�ת���ַ���ͻ�����Զ��һ��
//	//printf("%s\n", path);
//	//����һ���ļ���ʧ��
//	//FILE *fw = fopen(path, "w");
//	//assert(fw != NULL);//fopen�ķ���ֵ��һ����ָ��ָʾ���������п�
//	
//	/*�ļ���д�뺯��
//	ԭ�ͣ�fwrite(buf,size,count,fp);
//	bufΪָ�����ͣ������ļ��е���������ŵ�λ�ã�
//	sizeΪһ�ζ�ȡ���ֽ�����countΪ���ж������Ĵ�����
//	fpΪ�ļ�ָ�룬ָ��Ҫ���в������ļ�*/
//	//char buf[] = "hello";
//	//fwrite(buf, sizeof(char),strlen(buf)+1, fw);
//
//	FILE *fr = fopen(path, "r");
//	assert(fr != NULL);
//	char buf[100] = "";
//	int len = fread(buf, sizeof(char), 200, fr);
//	printf("%d,%s\n", len, buf);
//	//�ƶ��ļ�λ��ָ��
//	fseek(fr,-len*sizeof(char),SEEK_CUR);
//	char buf2[100]="";
//	//int len2 = fread(buf, sizeof(char), 200, fr);
//	int len2 = fread(buf2, sizeof(char), 200, fr);
//	printf("%d,%s\n", len2, buf2);
//	//fclose(fw);//�ļ��رպ���
//	return 0;
//}
//�ļ���������srcpath��ֵ��despath
void FileCopy(const char *despath, const char *srcpath)
{
	FILE *fr = fopen(srcpath, "r");//��
	FILE *fw = fopen(despath, "w");//д
	assert(fr != NULL&&fw != NULL);
	char buf;
	while (fread(&buf, sizeof(char), 1, fr) > 0)
	{
		fwrite(&buf, sizeof(char), 1, fw);
	}
	fclose(fw);
	fclose(fr);
}
int main()
{
	char *src = "D:\\1.cpp";
	char *des = "D:\\2.cpp";
	FileCopy(des, src);
	return 0;
}


