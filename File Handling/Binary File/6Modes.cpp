#include <iostream>
#include <fstream>

using namespace std;

class Student
{
public:
    int roll;
    char name[20];
    float cgpa;
};

int main()
{
    Student s;

    fstream file("student.dat", ios::in | ios::out | ios::binary);

    // ===========================
    // 1. seekg() + ios::beg
    // ===========================
    file.seekg(0, ios::beg);
    file.read((char*)&s, sizeof(s));

    cout << "seekg(0, ios::beg)\n";
    cout << s.roll << " " << s.name << " " << s.cgpa << endl << endl;

    // ===========================
    // 2. seekg() + ios::cur
    // ===========================
    file.seekg(0, ios::cur);
    file.read((char*)&s, sizeof(s));

    cout << "seekg(0, ios::cur)\n";
    cout << s.roll << " " << s.name << " " << s.cgpa << endl << endl;

    // ===========================
    // 3. seekg() + ios::end
    // ===========================
    file.seekg(-sizeof(Student), ios::end);
    file.read((char*)&s, sizeof(s));

    cout << "seekg(-sizeof(Student), ios::end)\n";
    cout << s.roll << " " << s.name << " " << s.cgpa << endl << endl;

    // ===========================
    // 4. seekp() + ios::beg
    // ===========================
    file.seekp(0, ios::beg);
    cout << "Write pointer moved to beginning.\n\n";

    // ===========================
    // 5. seekp() + ios::cur
    // ===========================
    file.seekp(sizeof(Student), ios::cur);
    cout << "Write pointer moved one record ahead from current.\n\n";

    // ===========================
    // 6. seekp() + ios::end
    // ===========================
    file.seekp(-sizeof(Student), ios::end);
    cout << "Write pointer moved to last record.\n";

    file.close();

    return 0;
}