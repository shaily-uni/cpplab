#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Student {
private:
    string name;
    int age;
    T course;
    T department;
public:
    Student(string n, int a, T c, T d) : name(n), age(a), course(c), department(d) {}
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};
int main() {
    Student<string> student1("John Doe", 20, "Computer Science", "Engineering");
    student1.display();
    Student<string> student2("Jane Smith", 22, "Mechanical Engineering", "Engineering");
    student2.display();
    Student<string> student3("Alice Brown", 21, "Biology", "Science");
    student3.display();
    return 0;
}
