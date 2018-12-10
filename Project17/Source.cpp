#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
void task1()
{
	int h, m, s, sec;
start:
	printf("Введем количество минут: ");
	scanf_s("%d", &m);
	printf("Введем количество секунд: ");
	scanf_s("%d", &s);
	printf("Введем количество часов : ");
	scanf_s("%d", &h);
	if (m > 60)
	{
		printf("Вы превысили данный диапазон!\n");
		goto start;
	}
	if (m > 60)
	{
		printf("Вы превысили данный диапазон!\n");
		goto start;
	}
	if (h > 24)
	{
		printf("Вы превысили данный диапазон!\n");
		goto start;
	}
	sec = h * 3600 + 60 * m + s;
	printf("Секунд за день: %d\n",sec);
	printf("Минут за день: %d\n",m);
	printf("Часов за день: %d\n",h);
}
void task2()
{
	int n;
	printf("Введем число n:");
	scanf_s("%d", &n);
	if (n % 10 == n / 10000)
	{
		printf("Палиндром\n");
	}
	else
	{
		printf("не палиндром\n");
	}
}
void task3()
{
	int m;
	srand(time(NULL));
	m = 2 + rand() % 4;
	printf("Оценка %d\n", m);
	switch (m)
	{
	case 2:
	{
		printf("Неудовлетворительно\n");
	}
	break;
	case 3:
	{
		printf("Удовлетворительно\n");
	}
	break;
	case 4:
	{
		printf("Хорошо\n");
	}
	break;
	case 5 :
	{
		printf("Отлично\n");
	}
	break;
	default:
		break;
	}


}
void task4()
{
	int l, k, t, n1, j, n;
	printf("Количество поездок:");
	scanf_s("%d", &n);
	l = n / 60;
    k = n % 60;

	j = k / 10;

	t = k % 10;

	if (k>34)
	{
		l = l + 1;
		printf("Число: %d\n",l);
	}
	 if (t=9)
	{
		j = j + 1;
		printf("Количество: %d\n", j);
	}
	else
	{
		n1 = t;
		printf("Количество: %d\n",n1);
	}
}
void task5()
{
	int a,n,m,k,l;
	printf("Число a:");
	scanf_s("%d", &a);
	if (a<10)
	{
		printf("Число однозначное: %d\n", a);
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
	printf("Введите номер задания: ");
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
	printf("Хотите продолжить 1/0? \n");
	scanf_s("%d", &flag);

	if (flag == 1)
		goto start;

	system("pause");

}