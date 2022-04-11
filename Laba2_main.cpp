#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student make_student() // Функция для возврата обьекта как результат
{
	string s;
	string i;
	int d;
	cout << "Введите ФИО: ";
	cin >> s;
	cout << "Введите группу: ";
	cin >> i;
	cout << "Введите средний балл: ";
	cin >> d;
	Student t(s, i, d);
	return t;
}

void print_student(Student a) // Функция для передачи обьекта как параметра
{
	a.show();
}


int main()
{
	setlocale(LC_ALL, "Rus");

	Student t1; //конструктор без параметров 
	t1.show();
	cout << endl;

	Student t2("Курганов Никита Владимирович", "РИС-20-1бз", 5); // конструктор с параметрами 
	t2.show();
	cout << endl;


	Student t3 = t2; // конструктор копирования 
	t3.show();

	t3.set_FIO("Курганов Никита Владимирович"); // конструктор копирования 
	t3.set_group("РИС-20-1бз");
	t3.set_averageScore(5);
	cout << endl;
	
	print_student(t3); //конструктор копирования 
	cout << endl;

	t1 = make_student(); //конструктор копирования 
	cout << endl;
	t1.show();

	return 0;
}
