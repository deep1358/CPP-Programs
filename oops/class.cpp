#include <bits/stdc++.h>
using namespace std;

class Student
{
  string lName;

public:
  string name;
  int age;

  Student()
  {
    name = "";
    age = 0;
    lName = "";
  } //DEFAULT CONSTRUCTURE

  Student(string n, int a, string l)
  {
    name = n;
    age = a;
    lName = l;
  } //PARAMETERIZED CONSTRUCTURE

  Student(Student &a)
  {
    name = a.name;
    age = a.age;
    lName = a.lName;
  } //COPY CONSTRUCTURE

  void printInfo()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "lName: " << lName << endl;
  }
  void setName(string s)
  {
    lName = s;
  }

  bool operator==(Student &a)
  {
    if (name == a.name && age == a.age && lName == a.lName)
      return true;
    return false;
  }

  ~Student()
  {
    cout << "Destructure called" << endl;
  }
};

int main()
{
  // Student a[3];
  // for (int i = 0; i < 1; i++)
  // {
  //   string s;
  //   cin >> a[i].name;
  //   cin >> a[i].age;
  //   cin >> s;
  //   a[i].setName(s);
  // }
  // for (int i = 0; i < 1; i++)
  //   a[i].printInfo();

  Student a("Deep", 20, "Shah");
  // a.printInfo();
  Student c("deep", 20, "Shah");
  // c.printInfo();
  Student b = c;
  // b.printInfo();

  if (c == b)
  {
    cout << "Same" << endl;
  }
  else
  {
    cout << "Not Same" << endl;
  }

  return 0;
}