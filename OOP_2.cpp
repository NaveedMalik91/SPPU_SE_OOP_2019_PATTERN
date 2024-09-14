#include <iostream>
using namespace std;
class Marks
{
    float percentage;
    string mobile_number;

public:
    Marks() {}                 //Compulsorily a constructor need to be declared if parameterized constructor is declared
    Marks(float a, string b)
    {
        this->mobile_number = mobile_number;
        this->percentage = percentage;
    }
    friend class Student;
};
class Student
{
private:
    string name;
    int roll_no;
    string Class;
    int division;
    string dob;
    string bloodgroup;
    int static total_students;

public:
    Student() // Default Constructor to initialize values with default one
    {
        cout << "\n<-------------------STUDENT DATABASE--------------------->" << endl;

        name = " ";
        roll_no = 0;
        Class = " ";
        division = 0;
        dob = "dd/mm/yy";
        bloodgroup = " ";
        total_students++;
    }

    Student(string name, int roll_no, string Class, int division, string dob, string bloodgroup) // parameterized constructor to initialize values
    {
        this->name = name;
        this->roll_no = roll_no;
        this->Class = Class;
        this->division = division;
        this->dob = dob;
        this->bloodgroup = bloodgroup;
        total_students++;
    }
    void getdata()

    {
        Marks obj;
        cout << "Enter the name of the student:" << endl;
        cin >> name;

        cout << "Enter the roll number of the student:" << endl;
        cin >> roll_no;

        cout << "Enter the class of the student:" << endl;
        cin >> Class;

        cout << "Enter the division of the student:" << endl;
        cin >> division;

        cout << "Enter the date of birth of the student:" << endl;
        cin >> dob;

        cout << "Enter the blood group of the student:" << endl;
        cin >> bloodgroup;

        cout << "Enter the Mobile Number of the student:" << endl;
        cin >> obj.mobile_number;

        cout << "Enter the Marks of the student:" << endl;
        cin >> obj.percentage;
    }

    void display_data()
    {
        Marks obj;

        cout << "\n<------------------Database of student" << total_students << "----------------------->" << endl;
        cout << "NAME : " << name << endl;
        cout << "ROLL_NO : " << roll_no << endl;
        cout << "CLASS : " << Class << endl;
        cout << "DIVISION : " << division << endl;
        cout << "DATE OF BIRTH : " << dob << endl;
        cout << "MOBILE NUMBER :" << obj.mobile_number << endl;
        cout << "BLOODGROUP : " << bloodgroup << endl;
        cout << "MARKS :" << obj.percentage << endl;

        cout << "<------------------------------------------------------------------->" << endl;
    }

    ~Student()
    {
        cout << "The data of student having name " << name << "  is deleted" << endl;
    }

    static int number_of_students()
    {
        cout << "The totals number of students are :" << total_students << endl;
    }
};

int Student::total_students = 0; // Static variable initializer

int main(int argc, char const *argv[])
{
    Student obj1;
    obj1.getdata();
    obj1.display_data();

    Student obj2(obj1); // Copy Constructor to copy object data of  student 1 to student 2
    obj2.display_data();

    Student obj3; // Another object is created to store student 3 data
    obj3.getdata();
    obj3.display_data();

    Student::number_of_students();

    // WE CAN CREATE AS MANY AS OBJECTS TO STORE DATA OS STUDENTS

    return 0;
}
