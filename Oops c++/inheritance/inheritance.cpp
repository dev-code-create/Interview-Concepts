#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
  string name;
  int age;
  // Person(string name, int age)
  // {
  //   this->name = name;
  //   this->age = age;
  // }
};

class Student : public Person
{
public:
  int rollno;
  void getInfo()
  {
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
    cout << "rollno : " << rollno << endl;
  }
};
int main()
{
  Student s1;
  s1.name = "John";
  s1.age = 20;
  s1.rollno = 101;

  s1.getInfo();
  return 0;
}