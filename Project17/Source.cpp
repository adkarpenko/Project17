#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
void task1()
{
	int h, m, s, sec;
start:
	printf("������ ���������� �����: ");
	scanf_s("%d", &m);
	printf("������ ���������� ������: ");
	scanf_s("%d", &s);
	printf("������ ���������� ����� : ");
	scanf_s("%d", &h);
	if (m > 60)
	{
		printf("�� ��������� ������ ��������!\n");
		goto start;
	}
	if (m > 60)
	{
		printf("�� ��������� ������ ��������!\n");
		goto start;
	}
	if (h > 24)
	{
		printf("�� ��������� ������ ��������!\n");
		goto start;
	}
	sec = h * 3600 + 60 * m + s;
	printf("������ �� ����: %d\n",sec);
	printf("����� �� ����: %d\n",m);
	printf("����� �� ����: %d\n",h);
}
void task2()
{
	int n;
	printf("������ ����� n:");
	scanf_s("%d", &n);
	if (n % 10 == n / 10000)
	{
		printf("���������\n");
	}
	else
	{
		printf("�� ���������\n");
	}
}
void task3()
{
	int m;
	srand(time(NULL));
	m = 2 + rand() % 4;
	printf("������ %d\n", m);
	switch (m)
	{
	case 2:
	{
		printf("�������������������\n");
	}
	break;
	case 3:
	{
		printf("�����������������\n");
	}
	break;
	case 4:
	{
		printf("������\n");
	}
	break;
	case 5 :
	{
		printf("�������\n");
	}
	break;
	default:
		break;
	}


}
void task4()
{
	int l, k, t, n1, j, n;
	printf("���������� �������:");
	scanf_s("%d", &n);
	l = n / 60;
    k = n % 60;

	j = k / 10;

	t = k % 10;

	if (k>34)
	{
		l = l + 1;
		printf("�����: %d\n",l);
	}
	 if (t=9)
	{
		j = j + 1;
		printf("����������: %d\n", j);
	}
	else
	{
		n1 = t;
		printf("����������: %d\n",n1);
	}
}
void task5()
{
	int a,n,m,k,l;
	printf("����� a:");
	scanf_s("%d", &a);
	if (a<10)
	{
		printf("����� �����������: %d\n", a);
	}
	 if(a>10 && a%10<10)
	{
		 m = a / 10;
		n = a % 10;
		printf("%d", n);
		printf("%d\n", m);
	}
	 if (a%100>=0 && a%100<10)
	 {
		 k = a / 100;
		 n = a / 10;
		 m = a ;
		 printf("%d", m);
		 printf("%d", k);
		 printf("%d\n", n);
	 }
	 if (a % 1000 >= 0 && a % 1000 < 10)
	 {
		 m = a /10000;
		 n = a / 1000;
		 k = a / 100;
		 l = a / 10;
		 printf("%d", l);
		 printf("%d", k);
		 printf("%d", n);
		 printf("%d\n", m);
	 }
	 

}

int main()
{
	setlocale(LC_ALL, "");
	int task;
	int flag;
start:
	printf("������� ����� �������: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();
	}
	break;
	case 2:
	{
		task2();
	}
	break;
	case 3 :
	{
		task3();
	}
	break;
	case 4 :
	{
		task4();
	}
	break;
	case 5 :
	{
		task5();
	}
	break;
	default:
		break;
	}
	printf("������ ���������� 1/0? \n");
	scanf_s("%d", &flag);

	if (flag == 1)
		goto start;

	system("pause");

}