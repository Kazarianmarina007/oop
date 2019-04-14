#include <iostream>
#include <vector>
#include "lab6_1.cpp"
using namespace std;

int main()
{
    vector<Student> vec;
    int n;
    cout << "kolichestvo studentov: ";
    cin >> n;
    string name, family, group;
    int age;
    int ocenki[5];
    for (int i = 0; i < n ; i++) {
        Student* stud;
        cout << "ima i familia: ";
        cin >> stud->name >> stud->family;
        cout << "gruppa: ";
        cin >> stud->group;
        cout << "ocenki studenta:";
        for (int j = 0; j < 5; j++) {
            cin >> stud->notes[j];
        }
        vec.push_back(*stud);
    };
    return 0;
}
