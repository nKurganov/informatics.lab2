#include <iostream>
#include <string>

using namespace std;

class Student
{
    string FIO;
    string group;
    int averageScore;
public:
    Student(); //����������� ��� ���������� 
    Student(string, string, int); // ����������� � ����������� 
    Student(const Student&); // ����������� ������������ 
    ~Student(); // ����������
    string get_FIO(); // ��������
    void set_FIO(string); // �����������
    string get_group(); // ��������
    void set_group(string); // �����������
    int get_averageScore(); // ��������
    void set_averageScore(int); // �����������
    void show(); // �������� ��������� 
};