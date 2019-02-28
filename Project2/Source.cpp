#include<iostream> 
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include <iomanip>
#include<cstring>
using namespace std;
void func2(int *&a, int n)
{
	
	int *b= new int[n + 1];
	for (size_t i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	b[n] = 100;
	delete[] a;
	a = b;

	for (size_t i = 0; i < n + 1; i++)
	{
		cout << a[i] << endl;
	}



}
void func3(int *&a, int n)
{

	int *b = new int[n + 2];
	for (size_t i = 1; i < n; i++)
	{
		b[i] = a[i-1];
	}
	b[n] = 100;
	b[0] = 0;
	delete[] a;
	a = b;

	for (size_t i = 0; i < n + 1; i++)
	{
		cout << a[i] << endl;
	}
}
void func(int a[])
{
	int *p;
	for (p = a; p < a + 10; p = p + 1)
	{
		*p = -10 + rand() % 40;
		cout << *p << endl;
	}
}
int *func4(int *a,int n)
{
	int g=0;
	for (size_t i = 0; i < 10; i++)
	{
		if (a[i] != 0)
			g++;
	}
	int *b = new int[g-1];
	int j = 0;
	printf("----------------\n");
	for (size_t i = 0; i < 10; i++)
	{
		if (a[i] != 0)
		{
			b[j] = a[i];
			cout << b[j] << endl;
			j++;
			
		}
	}
	return b;
}
void func5(int *&a, int &n)
{
	int g = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] < 20)
			g++;
	}
	int *b = new int[g ];
	int j = 0;
	printf("----------------\n");
	for (size_t i = 0; i < 10; i++)
	{
		if (a[i] < 20)
		{
			b[j] = a[i];
			cout << b[j] << endl;
			j++;

		}
	}
	delete[]a;
	a = b;
}
void func6(int *&a, int &n)
{
	int g = -1;
	for (size_t i = 0; i < n; i++)
	{
		if (g != -1)
		{
			continue;
		}
		if (a[i] < 0)
			g=i;
		
	}
	int *b = new int[n+1];

	printf("----------------\n");
	for (size_t i = 0; i < 11; i++)
	{
		static int j = 0;
		if (g == -1)
		{
			b[0] = 100;
			g = 100;
		
			
		}
		if (g+1 == i)
		{
			b[i] = 100;
			
		
		}
		else
		{
			b[i] = a[j];
			j++;
			
		}
		cout << b[i] << endl;
	}
	delete[]a;
	a = b;
}
void func7(char str[])
{
	int s=0;
	int s1 = 0;
	int s2 = 0;
	for (size_t i = 0; i < 100; i++)
	{
		if (str[i] >47&&str[i]<58)
		{
			s++;
			continue;
		}
		if (str[i] > 64 && str[i] < 91|| str[i] > 96 && str[i] < 123)
		{
			s1++;
			continue;
		}
		if (str[i] > 0 && str[i] < 127)
		{
			s2++;
		}

	}
	cout << s <<' '<<s1<<' '<<s2<< endl;

}
void func8(char str[])
{
	int s = 0;
	
	for (size_t i = 0; i < strlen(str); i++)
	{
		if (str[i] == 32&&i!=0&&i!= (strlen(str)-1)&& str[i-1] != 32)
		{
			s++;
			continue;
		}
		

	}
	cout << s+1  << endl;

}
void func9(char str[])
{
	for (size_t i = 0; i < strlen(str); i++)
	{
		if (str[i] == '.')
		{
			str[i] = '!';
		}
	}
}
void func10(char str[])
{
	for (size_t i = 0; i < strlen(str); i++)
	{
		if (str[i] == '?')
		{
			str[i] = '1';
		}
	}
}
void func11(char str[], char x)
{
	int s = 0;
	for (size_t i = 0; i < strlen(str); i++)
	{
		if (str[i] == x)
		{
			s++;
		}
	}
	cout << s << endl;
}
int func12(char str[])
{
	int i = 0;
	int s = 0;
	while(str[i]!='\0')
	{
		i++;
		s++;
	}
	return s;
}
char* func13(char* str, char*str2,int s,int c)
{
	int count=0;
	 char*p= NULL;
	int i;
	for ( i = 0; i < s+1; i++)
	{
		int h = i;
		for (size_t j = 0; j < c; j++)
		{
			{
				if (str[h] == str2[j])
				{
					count++;
					h++;
				}
			}
		}

		if (count >= c )
		{
			if (p == NULL)
			{
				p = &str[i-1];
			}
		}
	}
	
	return p;
	
}
char func14(char* str,char c, int s)
{
	
	char*p = NULL;
	int i;
	for (i = 0; i < s + 1; i++)
	{
		
			if (str[i] == c)
			{
				if (p == NULL)
				{
					p = &str[i];
				}
			}
	}

	return *p;

}
bool func15(char*str,int s)
{
	int c = 1;
	int i = 0;
		for (size_t j = s-1; j >0;j--)
		{
			if (str[i] == 32 || str[j] == 32)
			{
				c++;
				continue;
			}
			else if (str[i] == str[j])
			{
				c++;
				i++;
			}
		}
		
	
	if (c == s)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void task18()
{
	char str[100];
	cin.ignore();
	cin.getline(str, 100);
	int s = strnlen_s(str, 100);
	cout << func15(str, s) << endl;
}
void task17()
{
	
	char str[100];
	cin.ignore();
	cin.getline(str, 100);
	int s = strnlen_s(str, 100);
	char c;
	cin >> c;
	cout << func14(str, c, s) << endl;
}
void task16()
{

	char str[100];
	cin.ignore();
	cin.getline(str, 100);
	int s = strnlen_s(str, 100);
	char str2[100];
	cin.ignore();
	cin.getline(str2, 100);
	int c=strnlen_s(str2, 100);
	cout << func13(str, str2, s, c) << endl;


}
void task15()
{
	char*p;
	char str[100];
	cin.ignore();
	cin.getline(str, 100);
	char str2[100];
	cin.ignore();
	cin.getline(str2, 100);
	cout << strnlen_s(str,100) << endl;
if (strstr(str, str2))
	cout << strstr(str, str2) - str << endl;
}
void task14()
{
	char str[100];
	char x = '#';
	cin.ignore();
	cin.getline(str, 100);
	func11(str, x);
}
void task13()
{
	char str[100];
	char x='%';
	cin.ignore();
	cin.getline(str, 100);
	func11(str, x);
}
void task12()
{
	char str[100];
	cin.ignore();
	cin.getline(str, 100);
	cout << func12(str) << endl;
}
void task11()
{
	char str[100];
	char x;
	cin >> x;
	cin.ignore();
	cin.getline(str, 100);
	func11(str,x);
}
void task10()
{
	char str[100];
	cin.ignore();
	cin.getline(str, 100);
	cout << str << endl;
	func10(str);
	cout << str << endl;
}
void task9()
{
	char str[100];
	cin.ignore();
	cin.getline(str, 100);
	cout << str << endl;
	func9(str);
	cout << str << endl;
}
void task8()
{
	char str[100];
	cin.ignore();
	cin.getline(str, 100);
	cout << str << endl;
	func8(str);


}
void task7()
{

	char str[100];
	strcpy_s(str, "11socbs11;;");
	int x = str[0];
	cout << str <<x<< endl;
	func7(str);
}
void taskX_0()
{
	void *p;
	int x =100;
	p = &x;
	cout << *(int*)p << endl;

}
void task0_0()
{
	int x, y;
	int *p,**p4;
	p = &x;
	p = &y;
	*p = 10;
	*p = 100;
	const int *p2=&x;
	*p = 10;
	*p = 100;
	const int const *p3;



	p4 = &p;


}
void task6()
{
	
	int *p;
	int n;
	cin >> n;
	int *a = new int[n];
	double o[4] = { 0 };
	for (p = a; p < a + n; p = p + 1)
	{
		*p = 1 + rand() % 12;
		cout << *p << endl;
		if (*p <= 3)
		{
			o[0] = o[0] + 1;
		}
		if (*p <= 6 && *p > 3)
		{
			o[1]++;
		}
		if (*p <= 9 && *p > 6)
		{
			o[2]++;
		}
		if (*p <= 12 && *p > 9)
		{
			o[3]++;
		}

	}
	for (size_t i = 0; i < 4; i++)
	{
		if (i == 3||i==4)
		{
			printf("------------------\n");
		}
		o[i] = double(o[i]) / n * 100;
		cout << fixed << setprecision(2) << o[i] << endl;
	}
	delete[]a;

}
void task5()
{

	int n = 10;
	int*a = new int[n];
	func(a);
	func6(a, n);

}
void task4()
{
	int n = 10;
	int*a = new int[n];
	func(a);
	func5(a, n);
	
}
void task3()
{
	int n = 10;
	int*a = new int[n];
	func(a);
	cout << func4(a, n) << endl;
	delete[]a;
}
void task2()
{
	int n = 10;
	int*a = new int[n];
	func(a);
	func3(a, n);
	delete[]a;
}
void task1()
{
	int n = 10;
	int*a=new int[n] ;
	func(a);
	func2(a, n);
	delete[]a;
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		case 4: task4(); break;
		case 5: task5(); break;
		case 6: task6(); break;
		case 7: task7(); break;
		case 8: task8(); break;
		case 9: task9(); break;
		case 10: task10(); break;
		case 11: task11(); break;
		case 12: task12(); break;
		case 13: task13(); break;
		case 14: task14(); break;
		case 15: task15(); break;
		case 16: task16(); break;
		case 17: task17(); break;
		case 18: task18(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}