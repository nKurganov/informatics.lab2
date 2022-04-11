#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student() // ����������� ��� ����������
{
	FIO = "�������� ������ ������������";
	group = "���-20-1��";
	averageScore = 5;
	cout << "����������� ��� ����������" << endl;

}

Student::Student(string N, string K, int S) // ����������� � �����������
{
	FIO = N;
	group = K;
	averageScore = S;
	cout << "\n����������� � �����������" << endl;
}

Student::Student(const Student& t)
{
	FIO = t.FIO;
	group = t.group;
	averageScore = t.averageScore;
	cout << "����������� �����������" << endl;
}

Student::~Student() // ����������
{
	cout << "\n����������";
	cout << endl;
}

string Student::get_FIO() // ���������
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

void Student::set_FIO(string N) // ������������
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
	cout << "���: " << FIO << endl;
	cout << "������: " << group << endl;
	cout << "������� ����: " << averageScore << endl;
}