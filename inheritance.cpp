#include <iostream>
#include <cstring>
using namespace std;

class teacher   /*Parent class*/
{
  private:
      char fname[100], lname[100], gender[10];

  protected:
      int age;

  public:
      void input_person();
      void display_person();
};

class student: public teacher  /*Child class*/
{
  private:
      char college_name[100];
      char level[20];

  public:
      void input_student();
      void display_student();
};

// Correcting the class name from person to teacher
void teacher::input_person()
{
    cout << "First Name: ";
    cin >> fname;
    cout << "Last Name: ";
    cin >> lname;
    cout << "Gender: ";
    cin >> gender;
    cout << "Age: ";
    cin >> age;
}

void teacher::display_person()
{
    cout << "First Name : " << fname << endl;
    cout << "Last Name  : " << lname << endl;
    cout << "Gender     : " << gender << endl;
    cout << "Age        : " << age << endl;
}

void student::input_student()
{
    // Calling the parent class method
    input_person();
    cout << "College: ";
    cin.ignore();  // To clear the input buffer
    cin.getline(college_name, 100);  // Safe string input
    cout << "Level: ";
    cin >> level;
}

void student::display_student()
{
    display_person();  // Calling the parent class method
    cout << "College    : " << college_name << endl;
    cout << "Level      : " << level << endl;
}

int main()
{
    student s;
    cout << "Input data" << endl;
    s.input_student();
    cout << endl << "Display data" << endl;
    s.display_student();
    return 0;
}
