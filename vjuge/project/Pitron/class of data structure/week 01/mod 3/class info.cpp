#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int id;
    int age;
    string fathers_name;
    string mothers_name;

    void print_information()
    {
        cout<<name<<" "<<id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<endl;
    }

};
int main()
{
    Student s;
    s.name = "Ekra";
    s.id = 24;
    s.age = 21;
    s.fathers_name = "Golam";
    s.mothers_name = "Angila";
    s.print_information();

    Student s2;
    s2.name = "Asmahul Husna";
    s2.id =74;
    s2.age = 45;
    s2.fathers_name = "lam";
    s2.mothers_name = "Angila";
    s2.print_information();

}
