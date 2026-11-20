/*Write a C++ program that:

1. Create a Student class containing:
   - int roll
   - char name[20]
   - float cgpa
2. Take details of 5 students from the user.
3. Store all students in a binary file named student.dat.
4. Ask the user to enter a roll number to delete.
5. Create another binary file temp.dat.
6. Copy every student except the entered roll number into temp.dat.
7. Delete the old student.dat file.
8. Rename temp.dat as student.dat.
9. Display all remaining students.*/

#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

class Student
{
private:
   int roll;
   char name[20];
   float cgpa;

public:
   void input()
   {
      cout << "Enter Roll Number: ";
      cin >> roll;

      cout << "Enter Name: ";
      cin >> name;

      cout << "Enter CGPA: ";
      cin >> cgpa;
   }

   void display()
   {
      cout << "Roll Number : " << roll << endl;
      cout << "Name        : " << name << endl;
      cout << "CGPA        : " << cgpa << endl;
      cout << "--------------------------" << endl;
   }

   int getRoll()
   {
      return roll;
   }
};

int main()
{
   Student s;
   int deleteRoll;

   // Store 5 students
   ofstream fout("student.dat", ios::binary);

   for (int i = 1; i <= 5; i++)
   {
      cout << "\nEnter Details of Student " << i << endl;
      s.input();
      fout.write((char *)&s, sizeof(s));
   }

   fout.close();

   // Roll number to delete
   cout << "\nEnter Roll Number to Delete: ";
   cin >> deleteRoll;

   ifstream fin("student.dat", ios::binary);
   ofstream temp("temp.dat", ios::binary);

   while (fin.read((char *)&s, sizeof(s)))
   {
      if (s.getRoll() != deleteRoll)
      {
         temp.write((char *)&s, sizeof(s));
      }
   }

   fin.close();
   temp.close();

   // Delete old file
   remove("student.dat");

   // Rename temp file
   rename("temp.dat", "student.dat");

   // Display remaining students
   cout << "\nRemaining Students:\n"
        << endl;

   ifstream file("student.dat", ios::binary);

   while (file.read((char *)&s, sizeof(s)))
   {
      s.display();
   }

   file.close();

   return 0;
}