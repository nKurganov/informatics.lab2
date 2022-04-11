#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student() // Конструктор без параметров
{
	FIO = "Курганов Никита Владимирович";
	group = "РИС-20-1бз";
	averageScore = 5;
	cout << "Конструктор без параметров" << endl;

}

Student::Student(string N, string K, int S) // Конструктор с параметрами
{
	FIO = N;
	group = K;
	averageScore = S;
	cout << "\nКонструктор с параметрами" << endl;
}

Student::Student(const Student& t)
{
	FIO = t.FIO;
	group = t.group;
	averageScore = t.averageScore;
	cout << "Конструктор копирования" << endl;
}

Student::~Student() // Деструктор
{
	cout << "\nДеструктор";
	cout << endl;
}

string Student::get_FIO() // Селекторы
{
	return FIO;
}

string Student::get_group()
{
	return group;
}

int Student::get_averageScore()
{
	return averageScore;
}

void Student::set_FIO(string N) // Модификаторы
{
	FIO = N;
}

void Student::set_group(string K) 
{
	group = K;
}

void Student::set_averageScore(int S)
{
	averageScore = S;
}

void Student::show()
{
	cout << "ФИО: " << FIO << endl;
	cout << "Группа: " << group << endl;
	cout << "Средний балл: " << averageScore << endl;
}