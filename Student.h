#include <iostream>
#include <string>

using namespace std;

class Student
{
    string FIO;
    string group;
    int averageScore;
public:
    Student(); //конструктор без параметров 
    Student(string, string, int); // Конструктор с параметрами 
    Student(const Student&); // Конструктор копиррования 
    ~Student(); // Деструктор
    string get_FIO(); // Селектор
    void set_FIO(string); // Модификатор
    string get_group(); // Селектор
    void set_group(string); // Модификатор
    int get_averageScore(); // Селектор
    void set_averageScore(int); // Модификатор
    void show(); // Просмотр атрибутов 
};