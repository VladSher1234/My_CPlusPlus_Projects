#include <iostream>
#include <string>
using namespace std;

class Person 
{
  public:
    int age;
    string name;
    Person(int a, string n) 
    {
        age = a;
        name = n;
    }
    void print() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


int main() {
    Person p(25, "Joe");
    p.print();
}