#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Student
{
private:
    string name;
    string Dob;
    string Telephone_number;

public:
    //<---------------Constructors---------------->
    Student()
    {
        name = "";
        Dob = "";
        Telephone_number = "";
    }
    Student(string name, string Dob, string Telephone_number)
    {
        this->Dob = Dob;
        this->name = name;
        this->Telephone_number = Telephone_number;
    }
    ~Student(){}

    //<---------------Set data function-------------------->
    void set_data()
    {
        cout << "Enter name of student" << endl;
        getline(cin, name);
        cout << "Enter Date of Birth of student" << endl;
        getline(cin, Dob);
        cout << "Enter Telephone number of student" << endl;
        getline(cin, Telephone_number);
    }

    //<-----------------Display data function--------------->
    void display_data()
    {
        cout << "---------------------------------------------" << endl;
        cout << "NAME:" << name << endl;
        cout << "DOB:" << Dob << endl;
        cout << "TELEPHONE_NUMBER:" << Telephone_number<<endl;
        cout << "---------------------------------------------" << endl;
    }

    //<--------------Comapre names based on ASCII Values--------->
    static bool comparename(Student &s1, Student &s2)
    {
        return s1.name < s2.name;
    }

    //<-----------------Getname of student------------------------>
    string getname() const // this will give the names of students stored in vector
    {
        return name;
    }
};
int main()
{
    vector<Student> student_data;
    int choice;
    while (true)
    {
        cout << "-------------Menu------------" << endl;
        cout << "1. Add Student Data" << endl;
        cout << "2. Read Data of Student" << endl;
        cout << "3. Sort om the basis of names" << endl;
        cout << "4. Search on the basis of names" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;
        cin.ignore();
        if (choice == 1)
        {
            int number;
            cout << "Enter the number of Students to add" << endl;
            cin >> number;
            cin.ignore();
            
            for (int i = 0; i < number; i++)
            {
                Student obj;
                obj.set_data();
                student_data.push_back(obj); // Pushing student name to vector
            }
        }

        else if (choice == 2)
        {
            for (int i = 0; i < student_data.size(); i++)
            {
                student_data[i].display_data();
            }
        }

        else if (choice == 3)
        {
            // Names get sorted using STL function Sort
            sort(student_data.begin(), student_data.end(), Student::comparename);
            cout << "The Stored data has been Sorted successfully!!" << endl;
        }

        else if (choice == 4)
        {
            bool flag = false;
            cout << "Enter the name to Search in Database" << endl;
            string search_name;
            getline(cin,search_name);
            for (int i = 0; i < student_data.size(); i++)
            {
                if (student_data[i].getname() == search_name)
                {
                    // display data for searched student
                    student_data[i].display_data();
                    flag = true;
                    break;
                }
                else
                {
                    continue;
                }
                
            }
            if(!flag)
            {
                cout << "-------------------------" << endl;
                cout << "STUDENT RECORD NOT FOUND." << endl;
                cout << "-------------------------" << endl;
            }
        }
        else if(choice == 5)
        {
            cout<<"Invalid choice"<<endl;
            break;
        }
    }
    return 0;
}