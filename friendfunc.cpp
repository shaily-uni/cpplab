#include <iostream>
#include <string>
using namespace std;
class Student; 
class Details {
public:
    void display(Student& s);
};
class Student {
private:
    string name;
    int age;
    string department;
    string course;
public:
    Student(string n, int a, string dep, string c) : name(n), age(a), department(dep), course(c) {}
    friend class Details;
};
void Details::display(Student& s) {
    cout << "Student Details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Course: " << s.course << endl;
}
int main() {
    Student student("Asdf", 20, "Computer Science", "Data Structures");
    Details details;
    details.display(student);
    return 0;
}
