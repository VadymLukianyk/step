// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{   
	
	setlocale(LC_ALL, "Russian");
	/*cout << 1 << endl;
	int q, w, e, a, b, c;
	cin >> a >> b >> c;
	q = a + b + c;
	w = a*b*c;
	e = (a + b + c) / 3;
	cout << "Сума" << q << endl;
	cout << "Добуток" << w << endl;
	cout << "Середнє арифметичне" << e << endl;

	system ("pause");
	system("cls"); 

	cout << 2 << endl;
	int d, f, g, h;
	cin >> d >> f>> g;
	cout << "Вартiсть одного: \t " << d << "грн" << endl;
	cout << "Кiлькiсть: \t\t " << f << "шт" << endl;
	cout << "Знижка: \t\t " << g << "%" << endl;
	h = d*f - d*f*g/100;
    cout << "Вартiсть загальна: " << h << "\tгрн" << endl;
	system("pause");
	system("cls"); 

    cout << 3 << endl;
	int z, x, c, v;
	cin >> z >> x >> c;
	system("cls");
	cout << "Зарплата менеджера: \t\t\t\t" << z << endl;
	cout << "Загальна вартiсть угод: \t\t\t" << c << endl;
	cout << "Вiдсоток вiд угод: \t\t\t\t" << x << endl;
	v = c*x / 100 + z;
	cout << "Зарплата менеджера з урахуванням вiтсоткiв: \t" << v << endl;
	system("pause");
	system("cls"); */


	cout << 4 << endl;
	int y, u, i, o, p, t;
	cin >> y >> u;
	cout << "Розмiр фiльму" << y << "GB" << endl;
	cout << "Швидкiсть завантаження" << u << "bit/sec";
	t = y / u;
	i = t / 3600;
	o = t % 3600 / 60;
	p = t % 60;
	cout << "Час загрузки" << endl;
	cout << "Годин" << i << endl;
	cout << "Хвилин" << o << endl;
	cout << "Секунд" << p << endl;
	

	system("pause");
	system("cls");



	
	




    return 0;
}

